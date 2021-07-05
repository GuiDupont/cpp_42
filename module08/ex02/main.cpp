/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 09:59:26 by gdupont           #+#    #+#             */
/*   Updated: 2021/07/05 12:18:51 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Mutantstack.hpp"

int main(void)
{
	Mutantstack<int> stacky;

	stacky.push(2);
	stacky.push(6);
	stacky.push(4);
	stacky.push(8);
	stacky.push(9);

	std::cout << "First elem : " << *(stacky.begin());
	std::cout << "\nLast elem : " << *(stacky.end() - 1);
	std::cout << "\n";
	
	for (Mutantstack<int>::iterator i = stacky.begin(); i != stacky.end(); ++i)
	{
		std::cout << *i << " ";
	}
	std::cout << "\n";

	std::cout << "Quelques fonctions prises au container stack: \n";
	std::cout << "Top: " << stacky.top();
	std::cout << "\nsize: " << stacky.size();
	stacky.pop();
	std::cout << "\nApres un pop: " << stacky.size();
	

}