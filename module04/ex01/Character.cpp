/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 10:36:16 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/04 13:51:00 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"


Character::Character(void) {
	return ;
}

Character::Character(std::string const & name) : _name(name),
	_AP(40), _weapon(NULL) {
}

Character::~Character(void) {
}

Character::Character(Character const & rhs) {
	*this = rhs;
}

Character const & Character::operator=(Character const & rhs) {
	this->_name = rhs.getName();
	this->_AP = rhs.getAP();
	this->_weapon = rhs.getWeapon();
	return (*this);
}

int	Character::getAP() const {
	return (this->_AP);
}

Aweapon*	Character::getWeapon() const {
	return (this->_weapon);
}

std::string Character::getName() const {
	return (this->_name);
}

void	Character::recoverAP() {
	this->_AP += 10;
	if (this->_AP > 40)
		this->_AP = 40;
}

void	Character::equip(Aweapon* weapon) {
	this->_weapon = weapon;
}

void	Character::attack(Enemy* enemy) {
	if (!this->_weapon || this->_weapon->getAPCost() > this->_AP)
		return ;
	std::cout << this->_name << " attacks " << enemy->getType() << " with a "
	<< this->_weapon->getName() << std::endl;
	this->_AP -= this->_weapon->getAPCost();
	this->_weapon->attack();
	enemy->takeDamage(this->_weapon->getDamage());
	if (enemy->getHp() <= 0)
	{
		std::cout << this->_name << " killed " << enemy->getType() << std::endl;
		delete enemy;
	}
}

std::ostream & operator<<(std::ostream & o, Character const & rhs)
{
	o << rhs.getName() << " has " << rhs.getAP() << " AP ";
	if (rhs.getWeapon())
		std::cout << "and wields a " << rhs.getWeapon()->getName() << std::endl;
	else
		std::cout << "and is unarmed" << std::endl;
	return (o);
}

