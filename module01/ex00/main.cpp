/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 10:08:08 by gdupont           #+#    #+#             */
/*   Updated: 2021/05/17 09:43:16 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheStack(std::string name, int age)
{
	Pony Stacky(name, age);
	
	Stacky.present_myself();
}

void	ponyOnTheHeap(std::string name, int age)
{
	Pony*	Heapy = new Pony(name, age);
	Heapy->present_myself();
	delete Heapy;
}


int main(void)
{
	ponyOnTheStack("Stacky", 10);
	ponyOnTheHeap("Heapy", 12);
	return (0);
}

// clang++ -Wall -Wextra -Werror --std=c++98 *.cpp
