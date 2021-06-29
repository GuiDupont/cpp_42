/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 15:42:23 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/03 16:14:15 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(void) : Aweapon("PowerFist", 50, 8) { }


PowerFist::PowerFist(PowerFist const & src) : Aweapon("PowerFist", 50, 8) {
	*this = src;
}

PowerFist::~PowerFist(void) { }

PowerFist const & PowerFist::operator=(PowerFist const & toCopy) {
	this->_name = toCopy.getName();
	this->_APcost = toCopy.getAPCost();
	this->_Damage = toCopy.getDamage();
	return (*this);
}

void PowerFist::attack() const 
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

