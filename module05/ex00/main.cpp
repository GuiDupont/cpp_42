/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 10:26:06 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/30 11:19:28 by gdupont          ###   ########.fr       */
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
	
	std::cout << "\nBefore :\n" << jean << pierre << "\nAfter promotion:\n";
	try
    {
        pierre.incRank();
		std::cout << "Promotion reussie: " << pierre;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
	try 
	{
		jean.decRank();
		std::cout << "Promotion reussie: " << jean;
	}
	catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
	std::cout << "\nBefore :\n" << jean << pierre << "\nAfter promotion:\n";
	try
    {
        pierre.incRank();
		std::cout << "Promotion reussie: " << pierre;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
	try 
	{
		jean.decRank();
		std::cout << "Promotion reussie: " << jean;
	}
	catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

//clang++ -Wall -Wextra -Werror -fsanitize=address --std=c++98 *.cpp && ./a.out