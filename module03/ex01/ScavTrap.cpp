/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 14:13:40 by gdupont           #+#    #+#             */
/*   Updated: 2021/05/19 15:42:04 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : _name("NONAME"), 
			_hitPts(100), _maxHitPts(100), _energyPts(50), _maxEnergyPts(50),
			_level(1), _meleeAttackDmg(20), _rangedAttackDmg(15),
			_armorDmgReduction(3) {
	std::cout << "ScavTrap named " << this->_name 
	<< " is alive\n";
}

ScavTrap::ScavTrap(std::string const & name) : _name(name), 
			_hitPts(100), _maxHitPts(100), _energyPts(50), _maxEnergyPts(50),
			_level(1), _meleeAttackDmg(20), _rangedAttackDmg(15),
			_armorDmgReduction(3) {
	std::cout << "ScavTrap called " << this->_name
	<< "is alive\n";
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap named " << this->_name << " just past away\n";
}


bool		ScavTrap::rangedAttack(std::string const & target) {
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

bool		ScavTrap::meleeAttack(std::string const & target) {
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

std::string const & ScavTrap::getName(void) const {
	return (this->_name);
}

unsigned int const & ScavTrap::getMeleeDmg(void) const {
	return (this->_meleeAttackDmg);
}

unsigned int const & ScavTrap::getRangedDmg(void) const {
	return (this->_rangedAttackDmg);
}

unsigned int const & ScavTrap::getEnergyPts(void) const {
	return (this->_energyPts);
}

unsigned int const & ScavTrap::getHitPts(void) const {
	return (this->_energyPts);
}

unsigned int const & ScavTrap::getLevel(void) const {
	return (this->_level);
}

void		ScavTrap::takeDamage(unsigned int amount) {
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

void		ScavTrap::beRepaired(unsigned int amount) {
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

ScavTrap const & ScavTrap::operator=(ScavTrap const & toCopy) {
	this->_name = toCopy.getName() + "copy";
	this->_hitPts = toCopy.getHitPts();
	this->_energyPts = toCopy.getEnergyPts();
	this->_level = toCopy.getLevel();
	std::cout << "We just copied a ScavTrap called " << this->_name
	<< " from " << toCopy.getName() << "\n"; 
	return (*this);
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

void		ScavTrap::challengeNewcomer(void) {
	int choice = 0;

	std::string challenge[3] = { "gagner un concours de gobage de hot-dog", "faire un bras de fer chinois", 
					"monter des oeufs en neige avec une fourchette" };
	std::cout	<< "Salut etranger, je suis le gardien de la taverne, pour entrer tu dois relever un defi : \n- " 
	<< challenge[0] << "\n- " << challenge[1] << "\n- " << challenge[2] << "\n";
	choice = getIntFromCin("Fais ton choix en indiquant 1,2 ou 3\n", 1, 3) - 1;
	std::cout << "tu as donc choisi de" << challenge[choice] << " coquin va\n";
}
