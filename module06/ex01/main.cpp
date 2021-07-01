/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 10:47:53 by gdupont           #+#    #+#             */
/*   Updated: 2021/07/01 16:16:44 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <iostream>

typedef struct Data {
	char	rawbits[sizeof(uintptr_t)];
}				Data;

uintptr_t serialize(Data* data) {
	uintptr_t toReturn;
	char	*ptr;

	ptr = reinterpret_cast<char*>(&toReturn);
	for (unsigned long i = 0; i < sizeof(toReturn); i++)
	{
		ptr[i] = data->rawbits[i];
	}
	return (toReturn);
}

Data* deserialize(uintptr_t raw) {
	char *str;
	Data *result = new Data();
	
	str = reinterpret_cast<char*>(&raw);
	for (unsigned long i = 0; i < sizeof(raw); i++)
		result->rawbits[i] = str[i];
	return (result);
}

void	displayDataRawBits(Data *data) {
	for (unsigned long i = 0;i < sizeof(uintptr_t); i++)
		std::cout << static_cast<int>(data->rawbits[i]) << " ";
	std::cout << std::endl;
}

int main(void)
{
	Data 			*data;
	int				ToTest = 34534;

	data = deserialize(reinterpret_cast<uintptr_t>(&ToTest));
	std::cout << "\nSerialized   data: " << &ToTest << std::endl;
	std::cout << "Desarialized data: ";
	displayDataRawBits(data);
	std::cout << "Reserialized data: " << reinterpret_cast<int*>(serialize(data))
	<< std::endl;
	delete data;
	
	data = deserialize(34534);
	std::cout << "\nSerialized   data: " << ToTest << std::endl;
	std::cout << "Desarialized data: ";
	displayDataRawBits(data);
	std::cout << "Reserialized data: " << serialize(data); 
	std::cout << "\n"  ;
	return (0);
}