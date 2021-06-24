/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 10:37:57 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/24 16:54:44 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) {
	
}

Character::Character(std::string const name) : _name(name) {
	int i = -1;
	while (++i < 4)
		this->_inventory[i] = NULL;
}

Character::~Character(void) {
	this->selfDestroy();
}

Character::Character(Character const & rhs) {
	int i = -1;
	while (++i < 4)
		this->_inventory[i] = NULL;
	*this = rhs;
}

Character const & Character::operator=(Character const & rhs) {
	int i = -1;

	if (this == &rhs)
		return (*this);
	this->selfDestroy();
	this->_name = rhs._name;
	while (++i < 4)
		this->_inventory[i] = rhs._inventory[i]; 
	return (*this);
}

std::string const & Character::getName() const {
	return (this->_name);
}

void Character::equip(AMateria* m) {
	int i = 0;
	if (!m)
		return ;
	while (i < 4)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			return ;
		}
		i++;
	}
	delete m;
}

void Character::unequip(int idx)
{
	if (idx > 3 || idx < 0)
		return ;
	this->_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) {
	if (idx > 3 || idx < 0)
		return ;
	if (this->_inventory[idx] != NULL)
		this->_inventory[idx]->use(target);
	else
		std::cout << "NULL\n";
}

void	Character::selfDestroy(void)
{
	int i = -1;
	while (++i < 4)
	{
		delete this->_inventory[i];
		this->_inventory[i] = NULL;
	}
}