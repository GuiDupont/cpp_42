/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 14:13:40 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/28 09:52:18 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string const & name) : ClapTrap(name) {
	_hitPts = 100;
	_energyPts = 50;
	_attackDmg = 20;
	std::cout << "We just created a ScavTrap called " << this->getName() << std::endl;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap named " << this->_name << " died\n";
}

ScavTrap const & ScavTrap::operator=(ScavTrap const & rhs) {
	if (this == &rhs)
		return (*this);
	ClapTrap::operator=(rhs); 
	return (*this);
}

// int	getIntFromCin(std::string to_print, int min, int max) {
// 	int i = 0;

// 	while (1)
// 	{
// 		std::cout << to_print;
// 		std::cin >> i;
// 		if (!std::cin.fail() && i >= min && i <= max)
// 			return (i);
// 		std::cin.clear();
// 		std::cin.ignore(INT32_MAX, '\n');
// 	}
// }

void		ScavTrap::guardGate(void) {
	std::cout << "Guard mode activated\n";
}

void		ScavTrap::attack(std::string const & target) {
	
	
	if (this->_attackDmg > this->_hitPts)
	{
		std::cout << this->getName() << " n'a pas assez de points d'attaque ! Looser\n";
		return ;		
	}
	this->_hitPts -= this->_attackDmg;
	std::cout	<< this->getName() << " s'en prend a " << target
				<< ", lui infligant " << this->_attackDmg 
				<< " points de degats ! Dorenavant " 
				<< this->getName() << " detient "
				<< this->_hitPts << " points d'attaque" << std::endl;
	return ;	
}
