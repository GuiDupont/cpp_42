/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 15:42:23 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/28 15:43:56 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) : Aweapon("PlasmaRifle", 21, 5) { }


PlasmaRifle::PlasmaRifle(PlasmaRifle const & src) : Aweapon("PlasmaRifle", 21, 5) {
	*this = src;
}

PlasmaRifle::~PlasmaRifle(void) { }

PlasmaRifle const & PlasmaRifle::operator=(PlasmaRifle const & toCopy) {
	this->_name = toCopy.getName();
	this->_APcost = toCopy.getAPCost();
	this->_Damage = toCopy.getDamage();
	return (*this);
}

void PlasmaRifle::attack() const 
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

