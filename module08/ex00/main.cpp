/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 09:04:03 by gdupont           #+#    #+#             */
/*   Updated: 2021/07/04 11:19:05 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>
#include <vector>

template<typename T>
void	testFind(T const & c, int nb) {
	if (easyfind(c, nb))
		std::cout << nb << " found" << std::endl;
	else
		std::cout << nb << " not found" << std::endl;
}


int main(void) {
	

	int a[ 10 ] = { 10, 2, 17, 5, 16, 8, 13, 11, 20, 7 };
	std::vector< int > v( a, a + 10 );

	std::vector<int>::const_iterator it;
	std::vector<int>::const_iterator ite = v.end();
	
	for (it = v.begin(); it != ite; ++it)
	{
		std::cout << *it << " ";
	}
	std::cout << "\n";
	testFind(v, 1);
	testFind(v, 2);
	testFind(v, 5);
	testFind(v, 13);
	testFind(v, 20);
	testFind(v, 0);



	std::list< int > l;
	l.push_back(0);
	l.push_back(1);
	l.push_back(2);
	l.push_back(3);
	l.push_back(4);
	l.push_back(5);

	std::list<int>::const_iterator lit;
	std::list<int>::const_iterator lite = l.end();
	
	for (lit = l.begin(); lit != lite; ++lit)
	{
		std::cout << *lit << " ";
	}
	std::cout << "\n";
	testFind(l, 1);
	testFind(l, 2);
	testFind(l, 5);
	testFind(l, 13);
	testFind(l, 20);
	testFind(l, 0);

	 
	std::cout << easyfind2(v, 2) - v.begin();
	std::cout << easyfind2(v, 11) - v.begin();


	
    return 0;

	
}