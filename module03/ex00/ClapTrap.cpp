/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 10:25:06 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/28 14:19:09 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string const & name) : _name(name), 
			_hitPts(10), _energyPts(10), _attackDmg(0) {
	std::cout << "We just created a ClapTrap called " << this->_name
	<< "\n";
}

ClapTrap::ClapTrap(ClapTrap const & rhs) {
	*this = rhs;
	std::cout << "We just created a copy ClapTrap called " << this->_name
	<< "\n";
}

ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap named " << this->_name << " died\n";
}

std::string const & ClapTrap::getName(void) const {
	return (this->_name);
}

unsigned int const & ClapTrap::getAttackDmg(void) const {
	return (this->_attackDmg);
}

unsigned int const & ClapTrap::getEnergyPts(void) const {
	return (this->_energyPts);
}

unsigned int const & ClapTrap::getHitPts(void) const {
	return (this->_energyPts);
}

void		ClapTrap::takeDamage(unsigned int amount) {
	if (this->_energyPts < amount)
		this->_energyPts = 0;
	else
		this->_energyPts -= amount;
	if (this->_energyPts == 0)
		std::cout << this->_name << " a ete tue !!!!\n";
	else
		std::cout << this->_name << " a encore " << this->_energyPts
		<< " points de vie!" << std::endl;
}

void		ClapTrap::beRepaired(unsigned int amount) {
	if (!this->_energyPts)
		return ;
	this->_energyPts += amount;
	this->_hitPts += amount;
	std::cout << "++ Apres ce soin d'une valeur de " << amount << ", "
		<< this->_name << " a " << this->_energyPts <<  " points de vie et "
		<< this->_hitPts << " points d'attaque ++\n";
}

ClapTrap const & ClapTrap::operator=(ClapTrap const & rhs) {
	this->_hitPts = rhs.getHitPts();
	this->_energyPts = rhs.getEnergyPts();
	this->_name = rhs.getName();
	this->_attackDmg = rhs.getAttackDmg();
	std::cout << "We just copied a ClapTrap called " << rhs.getName()
	<< " into " << this->_name << "\n"; 
	return (*this);
}

void		ClapTrap::attack(std::string const & target) {
	
	
	if (this->_attackDmg > this->_hitPts)
	{
		std::cout << this->_name << " n'a pas assez de points d'attaque !";
		return ;		
	}
	this->_hitPts -= this->_attackDmg;
	std::cout	<< this->_name << " attaque " << target
				<< ", causant " << this->_attackDmg 
				<< " points de degats ! Maintenant " 
				<< this->_name << " possede "
				<< this->_hitPts << " points d'attaque" << std::endl;
	return ;	
}
