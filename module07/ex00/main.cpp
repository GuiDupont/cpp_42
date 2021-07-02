/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 09:39:09 by gdupont           #+#    #+#             */
/*   Updated: 2021/07/02 10:13:38 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>

int main(void)
{
	int 	intA = 21;
	int 	intB = 42;
	char	charA = 'f';
	char	charB = 'm';
	long	longA = 366654733366;
	long	longB = 134565786745;
	int		*ptrA = &intA;
	int		*ptrB = &intB;

	std::cout << "a = " << intA << " and b = " << intB << std::endl;
	std::cout << "min: " << min(intA, intB) << std::endl;
	std::cout << "max: " << max(intA, intB) << std::endl;
	
	std::cout << "\na = " << charA << " and b = " << charB << std::endl;
	std::cout << "min: " << min(charA, charB) << std::endl;
	std::cout << "max: " << max(charA, charB) << std::endl;
	
	std::cout << "\na = " << longA << " and b = " << longB << std::endl;
	std::cout << "min: " << min(longA, longB) << std::endl;
	std::cout << "max: " << max(longA, longB) << std::endl;
	
	std::cout << "\na = " << ptrA << " and b = " << ptrB << std::endl;
	std::cout << "min: " << min(&ptrA, &ptrB) << std::endl;
	std::cout << "max: "<< max(&ptrA, &ptrB) << std::endl;

	std::cout << "\n\nBEFORE SWAP : \n";
	std::cout << intA << " vs " << intB << std::endl;
	std::cout << charA << " vs " << charB << std::endl;
	std::cout << longA << " vs " << longB << std::endl;
	std::cout << ptrA << " vs " << ptrB << std::endl;

	swap(intA, intB);
	swap(charA, charB);
	swap(longA, longB);
	swap(ptrA, ptrB);

	std::cout << "\nAFTER SWAP : \n";
	std::cout << intA << " vs " << intB << std::endl;
	std::cout << charA << " vs " << charB << std::endl;
	std::cout << longA << " vs " << longB << std::endl;
	std::cout << ptrA << " vs " << ptrB << std::endl;
}
