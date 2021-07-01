/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 11:38:33 by gdupont           #+#    #+#             */
/*   Updated: 2021/07/01 10:33:51 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <cstdlib>
#include <cctype>
#include <iostream>
#include <limits>
#include <cmath>
#include <iomanip>

# define NbLiterals 6


int		isEqualToLiterals(char *s) {

	std::string lit[NbLiterals] = {"-inff", "+inff", "nanf", "-inff"
	,"+inf", "nan"};

	for (int i = 0; i < NbLiterals; i++)
		if (!strcmp(s, lit[i].c_str()))
			return (1);
	return (0);	
}

int		isNumber(char *s)
{
	for (size_t i = 0; s[i]; i++)
	{
		if (isdigit(s[i]))
			;
		else if (!i && (s[i] == '-' || s[i] == '+'))
			;
		else
			return (0);
	}
	return (1);
}

int		isFloat(char *s)
{
	for (size_t i = 0; s[i]; i++)
	{
		if (isdigit(s[i]))
			;
		else if (!i && (s[i] == '-' || s[i] == '+'))
			; 
		else if (i == strlen(s) - 1 && s[i] == 'f')
			;
		else if (s[i] == '.')
			;
		else
			return (0);
	}
	if (s[strlen(s) - 1] != 'f')
		return (0);
	return (1);
}

int		isDouble(char *s)
{
	for (size_t i = 0; s[i]; i++)
	{
		if (isdigit(s[i]))
			;
		else if (!i && (s[i] == '-' || s[i] == '+'))
			; 
		else if (s[i] == '.')
			;
		else
			return (0);
	}
	return (1);
}


void	printChar(double v) {
	std::cout << "CHAR: ";
	if (v > 255 || v < 0 || isnan(v))
		std::cout << "impossible";
	else if (std::isprint(static_cast<char>(v)) == 0)
		std::cout << "Non displayable";
	else
		std::cout << "'" << static_cast<char>(v) << "'";
	std::cout << std::endl;
	
}

void	printInt(double v) {
	std::cout << "INT: ";
	if (isnan(v) || isinf(v))
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(v) << std::endl;
}

void	printFloat(double v, int precision) {
	std::cout << "FLOAT: "
	<< std::fixed << std::setprecision(precision) 
	<< static_cast<float>(v) << 'f' <<  std::endl;
}

void	printDouble(double v) {
	std::cout << "DOUBLE: ";
	// 
	// else
	std::cout << static_cast<double>(v) << std::endl;
}
// void	printDouble(double v)


int	getPrecision(char *s) {
	for (int i = 0; s[i]; i++)
	{
		if (s[i] == '.')
		{
			if (s[0] == '-' && i != 1)
				i--;
			if (i < 2)
				i++;
			return (--i);
		}
	}
	return (1);
}

int main(int ac, char **av)
{
	double v;
	int precision;
	std::string literal;
	
	if (ac != 2)
	{	
		std::cout << "Please provide an argument\n";
		return (0);
	}
	if (!av[1][1])
		v = static_cast<double>(av[1][0]);
	else
		v = atof(av[1]);
	precision = getPrecision(av[1]);
	printChar(v);
	printInt(v);
	printFloat(v, precision);
	printDouble(v);
	
	// //INT

}
