/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 15:54:47 by gdupont           #+#    #+#             */
/*   Updated: 2021/05/25 15:02:59 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("NONAME"), 
			_hitPts(100), _maxHitPts(100), _energyPts(50), _maxEnergyPts(50),
			_level(1), _meleeAttackDmg(20), _rangedAttackDmg(15),
			_armorDmgReduction(3) {
	std::cout << "ClapTrap named " << this->_name 
	<< " is alive\n";
}

ClapTrap::ClapTrap(std::string const & name) : _name(name), 
			_hitPts(100), _maxHitPts(100), _energyPts(50), _maxEnergyPts(50),
			_level(1), _meleeAttackDmg(20), _rangedAttackDmg(15),
			_armorDmgReduction(3) {
	std::cout << "ClapTrap called " << this->_name
	<< " is alive\n";
}

ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap named " << this->_name << " just past away\n";
}


bool		ClapTrap::rangedAttack(std::string const & target) {
	if (this->_rangedAttackDmg > this->_hitPts)
	{
		std::cout << this->_name << " est trop mou!";
		return (0);		
	}
	this->_hitPts -= this->_rangedAttackDmg;
	std::cout << this->_name << " cible " << target
				<< " de loin, causant " << this->_rangedAttackDmg 
				<< " points de degats ! Dorenavant " 
				<< this->_name << " possede "
				<< this->_hitPts << " points d'attaque";
	return (1);	
}

bool		ClapTrap::meleeAttack(std::string const & target) {
	if (this->_meleeAttackDmg > this->_hitPts)
	{
		std::cout << this->_name << " est trop mou !";
		return (0);		
	}
	this->_hitPts -= this->_meleeAttackDmg;
	std::cout	<< this->_name << " cible " << target
				<< ", causant " << this->_meleeAttackDmg 
				<< " points de degats ! Dorenavant " 
				<< this->_name << " possede "
				<< this->_hitPts << " points d'attaque";
	return (1);	
}

std::string const & ClapTrap::getName(void) const {
	return (this->_name);
}

unsigned int const & ClapTrap::getMeleeDmg(void) const {
	return (this->_meleeAttackDmg);
}

unsigned int const & ClapTrap::getRangedDmg(void) const {
	return (this->_rangedAttackDmg);
}

unsigned int const & ClapTrap::getEnergyPts(void) const {
	return (this->_energyPts);
}

unsigned int const & ClapTrap::getHitPts(void) const {
	return (this->_energyPts);
}

unsigned int const & ClapTrap::getLevel(void) const {
	return (this->_level);
}

void		ClapTrap::takeDamage(unsigned int amount) {
	amount -= this->_armorDmgReduction;
	if (this->_energyPts < amount)
		this->_energyPts = 0;
	else
		this->_energyPts -= amount;
	if (this->_energyPts == 0)
		std::cout << this->_name << " est decede !!!!";
	else
		std::cout << this->_name << " a encore " << this->_energyPts
		<< " points de vie!";
	if (this->_armorDmgReduction && this->_energyPts)
		std::cout << " Il a ete protege par son armure de gros malade de "
		<< this->_armorDmgReduction << " points";
}

void		ClapTrap::beRepaired(unsigned int amount) {
	if (!this->_energyPts)
		return ;
	this->_energyPts += amount;
	if (this->_energyPts > this->_maxEnergyPts)
		this->_energyPts = this->_maxEnergyPts;
	this->_hitPts += amount;
	if (this->_hitPts > this->_maxHitPts)
		this->_hitPts = this->_maxHitPts;
	std::cout << "++ Apres avoir bu cette bonne biere de niveau " << amount << ", "
		<< this->_name << " a " << this->_energyPts <<  " points de vie et "
		<< this->_hitPts << " points d'attaque ++\n";
}

ClapTrap const & ClapTrap::operator=(ClapTrap const & toCopy) {
	this->_name = toCopy.getName() + "copy";
	this->_hitPts = toCopy.getHitPts();
	this->_energyPts = toCopy.getEnergyPts();
	this->_level = toCopy.getLevel();
	std::cout << "We just copied a ClapTrap called " << this->_name
	<< " from " << toCopy.getName() << "\n"; 
	return (*this);
}
