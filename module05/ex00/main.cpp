/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 10:26:06 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/25 14:17:16 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat jean = Bureaucrat("jean", 149);
	Bureaucrat pierre = Bureaucrat("pierre", 2);
	try 
	{
		Bureaucrat paul = Bureaucrat("paul", -2);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try 
	{
		Bureaucrat trop = Bureaucrat("trop", 160);

	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << jean;
	std::cout << pierre;
	pierre.incRank();
	jean.decRank();
	std::cout << jean;
	std::cout << pierre;
	pierre.incRank();
	jean.decRank();
	std::cout << jean;
	std::cout << pierre;
	
}