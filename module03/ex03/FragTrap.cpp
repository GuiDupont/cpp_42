/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 10:25:06 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/28 14:26:24 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string const & name) : ClapTrap(name) {
	_hitPts = 100;
	_energyPts = 50;
	_attackDmg = 20;
	std::cout << "We just created a FragTrap called " << this->getName() << std::endl;
}

FragTrap::FragTrap(FragTrap const & rhs) : ClapTrap(rhs.getName()) {
	*this = rhs;
	std::cout << "We just created a copy FragTrap called " << this->_name
	<< "\n";
}

FragTrap::~FragTrap(void) {
	std::cout << "FragTrap named " << this->_name << " died\n";
}

FragTrap const & FragTrap::operator=(FragTrap const & rhs) {
	if (this == &rhs)
		return (*this);
	ClapTrap::operator=(rhs); 
	return (*this);
}

void		FragTrap::attack(std::string const & target) {
	
	
	if (this->_attackDmg > this->_hitPts)
	{
		std::cout << this->getName() << " n'a pas assez de points d'attaque ! Tocard\n";
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

int	getIntFromCin(std::string to_print, int min, int max) {
	int i = 0;

	while (1)
	{
		std::cout << to_print;
		std::cin >> i;
		if (!std::cin.fail() && i >= min && i <= max)
			return (i);
		std::cin.clear();
		std::cin.ignore(INT32_MAX, '\n');
	}
}

void	FragTrap::highFivesGuys(void) {
	int choice = 0;

	choice = getIntFromCin("Salut Freroooooot, tape m'en 5 !\n1 - Oui\n2 - Non\n", 1, 2) - 1;
}
