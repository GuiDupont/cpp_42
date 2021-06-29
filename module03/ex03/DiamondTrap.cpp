/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 10:44:36 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/28 11:56:04 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string const & name) : ClapTrap(name + "_clap_name"), FragTrap(name + "_clap_name"),
ScavTrap(name + "_clap_name"), _name(name)
{
	_hitPts = 100;
	_energyPts = 10;
	_attackDmg = 20;
	this->_name = name;
	std::cout << "We just created a DiamondTrap called " << this->getName() << " and " << this->_name << std::endl;
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << "DiamondTrap named " << this->_name << " died\n";
}

DiamondTrap::DiamondTrap(DiamondTrap const & rhs) : ClapTrap(rhs.getName()), FragTrap(rhs.getName()),
ScavTrap(rhs.getName()) {
	*this = rhs;
}

void	DiamondTrap::whoAmI() const {
	std::cout << "I have 2 names :" << this->getName() << " and " << this->_name << std::endl;	
}

DiamondTrap const & DiamondTrap::operator=(DiamondTrap const & rhs) {
	if (this == &rhs)
		return (*this);
	ClapTrap::operator=(rhs);
	this->_name = rhs._name;
	return (*this);
}

void	DiamondTrap::attack(std::string const & target) {
	ScavTrap::attack(target);
}
