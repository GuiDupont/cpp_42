/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 10:25:06 by gdupont           #+#    #+#             */
/*   Updated: 2021/05/25 14:56:22 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap(), _vaultHunterDmg(25) {
	_energyPts = 100,
	_maxEnergyPts = 100; 
	_meleeAttackDmg = 30;
	_rangedAttackDmg = 20;
	_armorDmgReduction = 3;	 
	std::cout << "We just created a FragTrap named " << this->_name
	<< "\n";
}

FragTrap::FragTrap(std::string const & name) : 
			ClapTrap(name), _vaultHunterDmg(25) {
	this->_energyPts = 100,
	_maxEnergyPts = 100; 
	_meleeAttackDmg = 30;
	_rangedAttackDmg = 20;
	_armorDmgReduction = 3;
	std::cout << "We just created a FragTrap called " << this->_name
	<< "\n";
}

FragTrap::~FragTrap(void) {
	std::cout << "FragTrap named " << this->_name << " died\n";
}

unsigned int const & FragTrap::getVaultHunterDmg(void) const {
	return (this->_vaultHunterDmg);
}

FragTrap const & FragTrap::operator=(FragTrap const & toCopy) {
	this->_name = toCopy.getName() + "copy";
	this->_hitPts = toCopy.getHitPts();
	this->_energyPts = toCopy.getEnergyPts();
	this->_level = toCopy.getLevel();
	std::cout << "We just copied a FragTrap called " << this->_name
	<< " from " << toCopy.getName() << "\n"; 
	return (*this);
}

bool		FragTrap::vaulthunter_dot_exe(std::string const & target) {
	int random;

	std::string attacks[5] = { "calins", "bisous", "papouilles", 
				"chatouilles", "gillis" };
	random = rand() % 4;
	if (this->_vaultHunterDmg > this->_hitPts)
	{
		std::cout << this->_name << " n'a pas assez de points d'attaque !";
		return (0);		
	}
	this->_hitPts -= this->_vaultHunterDmg;
	
	std::cout	<< this->_name << " attaque " << target 
				<< " avec des " << attacks[random]
				<< ", causant " << this->_vaultHunterDmg
				<< " points de degats ! Maintenant " 
				<< this->_name << " possede "
				<< this->_hitPts << " points d'attaque";
	return (1);
}
