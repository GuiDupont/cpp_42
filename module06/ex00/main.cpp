/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 11:38:33 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/30 17:08:31 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <cstdlib>
#include <cctype>
#include <iostream>

int main(int ac, char **av)
{
	char c;
	double v;
	if (ac != 2)
	{	
		std::cout << "Please provide an argument\n";
		return (0);
	}
	v = atof(av[1]);
	c = av[1][1];
	
	//CHAR
	std::cout << "CHAR: ";
	if (v > 255 || v < 0)
		std::cout << "impossible";
	else if (std::isprint(static_cast<char>(v)) == 0)
		std::cout << "Non displayable";
	else
		std::cout << "'" << static_cast<char>(v) << "'";
	std::cout << std::endl;
	std::cout << std::isprint(static_cast<char>(v));
}
