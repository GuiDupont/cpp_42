/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 07:16:57 by gdupont           #+#    #+#             */
/*   Updated: 2021/07/05 09:56:50 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"



int main(void)
{
	srand (time(NULL));
	std::cout << "Let's test basics stuffs:\n\n";
	Span small(3);
	std::cout << "Shortest Span with 0 elem: ";
	small.shortestSpan();
	small.addNumber(4);
	std::cout << "Longest Span with 1 elem: ";
	small.longestSpan();
	small.addNumber(10);
	small.addNumber(32);

	std::cout << "Let's add a surplus elem: ";
	small.addNumber(3245);
	
	std::cout << "With 4 10 32 the shortest span is " << small.shortestSpan();
	//std::cout << small.longestSpan();
	std::cout << "\nWith 4 10 32 the longest span is " << small.longestSpan();


	std::cout << "\n\nLet's test with quantity of numbers:\n\n";

	std::vector<int> testRange;
	Span big(20000);
	for (int i = 0; i != 10000; ++i)
		testRange.push_back(rand()%20000000);
	big.addRange(testRange.begin(), testRange.end());
	std::cout << "In big the shortest span is " << big.shortestSpan();
	std::cout << "\nIn big the longest span is " << big.longestSpan();
}