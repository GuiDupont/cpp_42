/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 10:25:06 by gdupont           #+#    #+#             */
/*   Updated: 2021/05/19 11:44:24 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"

FragTrap::FragTrap(void) : _name("NONAME"), 
			_hitPts(100), _maxHitPts(100), _energyPts(100), _maxEnergyPts(100),
			_level(1), _meleeAttackDmg(30), _rangedAttackDmg(20),
			_armorDmgReduction(5), _vaultHunterDmg(25) {
	std::cout << "We just created a FragTrap named " << this->_name
	<< "\n";
}

FragTrap::FragTrap(std::string const & name) : _name(name), 
			_hitPts(100), _maxHitPts(100), _energyPts(100), _maxEnergyPts(100),
			_level(1), _meleeAttackDmg(30), _rangedAttackDmg(20),
			_armorDmgReduction(5), _vaultHunterDmg(25) {
	std::cout << "We just created a FragTrap called " << this->_name
	<< "\n";
}

FragTrap::~FragTrap(void) {
	std::cout << "FragTrap named " << this->_name << " died\n";
}


bool		FragTrap::rangedAttack(std::string const & target) {
	if (this->_rangedAttackDmg > this->_hitPts)
	{
		std::cout << this->_name << " n'a pas assez de points de force !";
		return (0);		
	}
	this->_hitPts -= this->_rangedAttackDmg;
	std::cout << this->_name << " attaque " << target
				<< " a distance, causant " << this->_rangedAttackDmg 
				<< " points de degats ! Maintenant " 
				<< this->_name << " possede "
				<< this->_hitPts << " points d'attaque";
	return (1);	
}

bool		FragTrap::meleeAttack(std::string const & target) {
	if (this->_meleeAttackDmg > this->_hitPts)
	{
		std::cout << this->_name << " n'a pas assez de points d'attaque !";
		return (0);		
	}
	this->_hitPts -= this->_meleeAttackDmg;
	std::cout	<< this->_name << " attaque " << target
				<< ", causant " << this->_meleeAttackDmg 
				<< " points de degats ! Maintenant " 
				<< this->_name << " possede "
				<< this->_hitPts << " points d'attaque";
	return (1);	
}

std::string const & FragTrap::getName(void) const {
	return (this->_name);
}

unsigned int const & FragTrap::getMeleeDmg(void) const {
	return (this->_meleeAttackDmg);
}

unsigned int const & FragTrap::getRangedDmg(void) const {
	return (this->_rangedAttackDmg);
}

unsigned int const & FragTrap::getEnergyPts(void) const {
	return (this->_energyPts);
}

unsigned int const & FragTrap::getHitPts(void) const {
	return (this->_energyPts);
}

unsigned int const & FragTrap::getLevel(void) const {
	return (this->_level);
}

unsigned int const & FragTrap::getVaultHunterDmg(void) const {
	return (this->_vaultHunterDmg);
}

void		FragTrap::takeDamage(unsigned int amount) {
	amount -= this->_armorDmgReduction;
	if (this->_energyPts < amount)
		this->_energyPts = 0;
	else
		this->_energyPts -= amount;
	if (this->_energyPts == 0)
		std::cout << this->_name << " est mort !!!!";
	else
		std::cout << this->_name << " a encore " << this->_energyPts
		<< " points de vie!";
	if (this->_armorDmgReduction && this->_energyPts)
		std::cout << " Il a ete protege par son armure de " 
		<< this->_armorDmgReduction << " points";
}

void		FragTrap::beRepaired(unsigned int amount) {
	if (!this->_energyPts)
		return ;
	this->_energyPts += amount;
	if (this->_energyPts > this->_maxEnergyPts)
		this->_energyPts = this->_maxEnergyPts;
	this->_hitPts += amount;
	if (this->_hitPts > this->_maxHitPts)
		this->_hitPts = this->_maxHitPts;
	std::cout << "++ Apres ce soin d'une valeur de " << amount << ", "
		<< this->_name << " a " << this->_energyPts <<  " points de vie et "
		<< this->_hitPts << " points d'attaque ++\n";
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
