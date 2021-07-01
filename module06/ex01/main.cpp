/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 10:47:53 by gdupont           #+#    #+#             */
/*   Updated: 2021/07/01 11:16:50 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <iostream>

class Data {
	public:
		double rawbits;
};

uintptr_t serialize(Data* ptr) {
	return (static_cast<uintptr_t>(ptr->rawbits));
}

Data* deserialize(uintptr_t raw) {
	std::cout << raw << std::endl;
	Data *result = new Data();
	result->rawbits = static_cast<double>(raw);
	return (result);
}


int main(void)
{
	Data *test;
	Data *test3 = deserialize(0);

	uintptr_t	test2;

	test3->rawbits = -34;

	test = deserialize(34245);
	test2 = serialize(test3);
	std::cout << test2;
	return (0);
}