/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 15:10:32 by gdupont           #+#    #+#             */
/*   Updated: 2021/05/25 15:57:08 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void) : ClapTrap() {
	_hitPts = 60;
	_maxHitPts = 60;
	_energyPts = 120,
	_maxEnergyPts = 120; 
	_meleeAttackDmg = 60;
	_rangedAttackDmg = 5;
	_armorDmgReduction = 0;	 
	std::cout << "We just created a NinjaTrap named " << this->_name
	<< "\n";
}

NinjaTrap::NinjaTrap(std::string const & name) : 
			ClapTrap(name) {
	_hitPts = 60;
	_maxHitPts = 60;
	_energyPts = 120,
	_maxEnergyPts = 120; 
	_meleeAttackDmg = 60;
	_rangedAttackDmg = 5;
	_armorDmgReduction = 0;	 
	std::cout << "We just created a NinjaTrap called " << this->_name
	<< "\n";
}

NinjaTrap::~NinjaTrap(void) {
	std::cout << "NinjaTrap named " << this->_name << " died\n";
}

NinjaTrap const & NinjaTrap::operator=(NinjaTrap const & toCopy) {
	this->_name = toCopy.getName() + "copy";
	this->_hitPts = toCopy.getHitPts();
	this->_energyPts = toCopy.getEnergyPts();
	this->_level = toCopy.getLevel();
	std::cout << "We just copied a NinjaTrap called " << this->_name
	<< " from " << toCopy.getName() << "\n"; 
	return (*this);
}

void NinjaTrap::ninjaShoebox(NinjaTrap & target) {
	unsigned int damage = 60;
	
	if (this->getHitPts() >= damage)
	{
		std::cout << "Un autre ninja ! Je vais te faire tres mal et t'enlever 60 pts\n";
		target.takeDamage(damage);
		std::cout << "\n";
		this->_hitPts -= damage;
	}
	else
		std::cout << "Oh non je suis trop faible\n";
}


void NinjaTrap::ninjaShoebox(FragTrap & target) {
	unsigned int damage = 25;
	
	if (this->getHitPts() >= damage)
	{
		std::cout << "Un FragTrap ! Je vais te faire un peu mal et t'enlever 20 pts\n";
		target.takeDamage(damage);
		std::cout << "\n";
		this->_hitPts -= damage;
	}
	else
		std::cout << "Oh non je suis fatigue\n";
}

void NinjaTrap::ninjaShoebox(ScavTrap & target) {
	unsigned int damage = 40;
	
	if (this->getHitPts() >= damage)
	{
		std::cout << "Un ScavTrap ! Je vais te faire moyennement mal et t'enlever 40 pts\n";
		target.takeDamage(damage);
		std::cout << "\n";
		this->_hitPts -= damage;
	}
	else
		std::cout << "Oh non j'ai pas envie de me battre\n";
}