/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 12:22:04 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/02 13:56:34 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void) : FragTrap(), NinjaTrap() {
	_energyPts = 120,
	_maxEnergyPts = 120; 
	_meleeAttackDmg = 60;
	_rangedAttackDmg = 20;
	std::cout << "We just created a SuperTrap named " << this->_name
	<< "\n";
}

SuperTrap::SuperTrap(std::string const & name) : 
			ClapTrap(name), NinjaTrap(name) {
	_energyPts = 120,
	_maxEnergyPts = 120; 
	_meleeAttackDmg = 60;
	_rangedAttackDmg = 20;
	std::cout << "We just created a SuperTrap called " << this->_name
	<< "\n";
}

SuperTrap::~SuperTrap(void) {
	std::cout << "SuperTrap named " << this->_name << " died\n";
}

// SuperTrap const & SuperTrap::operator=(SuperTrap const & toCopy) {
// 	this->_name = toCopy.getName() + "copy";
// 	this->_hitPts = toCopy.getHitPts();
// 	this->_energyPts = toCopy.getEnergyPts();
// 	this->_level = toCopy.getLevel();
// 	std::cout << "We just copied a NinjaTrap called " << this->_name
// 	<< " from " << toCopy.getName() << "\n"; 
// 	return (*this);
// }

bool	SuperTrap::meleeAttack(std::string const & target)
{
	return (NinjaTrap::meleeAttack(target));
}

bool	SuperTrap::rangedAttack(std::string const & target)
{
	return (FragTrap::rangedAttack(target));
}