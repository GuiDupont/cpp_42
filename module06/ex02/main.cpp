/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 16:56:00 by gdupont           #+#    #+#             */
/*   Updated: 2021/07/02 07:47:30 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"
#include <stdlib.h>
#include <time.h>
#include <sys/time.h>
#include <exception>

Base * generate(void) {
	int random;

	struct timeval tv;
	gettimeofday(&tv, NULL);
	srand(tv.tv_usec);
	random = rand() % 3;
	if (random == 2)
	{	
		std::cout << "I generated:  A element\n";
		return (new A);
	}
	else if (random == 1)
	{
		std::cout << "I generated:  B element\n";
		return (new B);
	}
	else
	{
		std::cout << "I generated:  C element\n";
		return (new C);
	}
}

void identify(Base* p) {
	A *typeA = NULL;
	B *typeB = NULL;
	C *typeC = NULL;

	(void)p;
	std::cout << "I identified: ";
	typeA = dynamic_cast<A*>(p);
	if (typeA)
	{
		std::cout << "A element" << std::endl;
		return ;
	}
	typeB = dynamic_cast<B*>(p);
	if (typeB)
	{
		std::cout << "B element" << std::endl;
		return ;
	}
	typeC = dynamic_cast<C*>(p);
	if (typeC)
	{
		std::cout << "C element" << std::endl;
		return ;
	}
	return ;
}

void identify(Base& p) {
	(void)p;
	std::cout << "I identified: ";
	try {
		A &typeA = dynamic_cast<A&>(p);	
		std::cout << "A element" << std::endl;
		(void)typeA;
		return ;
	}
	catch (std::exception &bc) {
		;	
	}
	try {
		B &typeB = dynamic_cast<B&>(p);	
		std::cout << "B element" << std::endl;
		(void)typeB;
		return ;
	}
	catch (std::exception &bc) {
		;	
	}
	try {
		C &typeC = dynamic_cast<C&>(p);	
		std::cout << "C element" << std::endl;
		(void)typeC;
		return ;
	}
	catch (std::exception &bc) {
		;	
	}
	return ;
}

int main(void)
{
	for (int i = 0; i < 30; i++) {
		Base *labase = generate();

		identify(labase);
		identify(*labase);
		std::cout << std::endl;
		delete labase;
	}
}
