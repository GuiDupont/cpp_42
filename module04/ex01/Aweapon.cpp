/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Aweapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 15:06:09 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/04 11:42:34 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Aweapon.hpp"

Aweapon::Aweapon(void) {
	;
}

Aweapon::Aweapon(std::string const & name, int damage, int apcost) :
	_name(name), _Damage(damage),  _APcost(apcost)
{
	;
}

Aweapon::Aweapon(Aweapon const & src) {
	*this = src;
}

Aweapon::~Aweapon(void) 
{
	;
}

Aweapon const & Aweapon::operator=(Aweapon const & rhs) {
	this->_name = rhs.getName();
	this->_APcost = rhs.getAPCost();
	this->_Damage = rhs.getDamage();
	return (*this);
}

int	Aweapon::getAPCost() const {
	return (this->_APcost);
}

int	Aweapon::getDamage() const {
	return (this->_Damage);
}

std::string Aweapon::getName() const {
	return (this->_name);
}

