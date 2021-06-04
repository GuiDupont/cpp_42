/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BaguetteDeSureau.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 15:42:23 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/04 12:00:03 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BaguetteDeSureau.hpp"

BaguetteDeSureau::BaguetteDeSureau(void) : Aweapon("BaguetteDeSureau", 100, 1) { }


BaguetteDeSureau::BaguetteDeSureau(BaguetteDeSureau const & src) {
	*this = src;
}

BaguetteDeSureau::~BaguetteDeSureau(void) { }

BaguetteDeSureau const & BaguetteDeSureau::operator=(BaguetteDeSureau const & toCopy) {
	this->_name = toCopy.getName();
	this->_APcost = toCopy.getAPCost();
	this->_Damage = toCopy.getDamage();
	return (*this);
}

void BaguetteDeSureau::attack() const 
{
	std::cout << "* Call me Death stick *" << std::endl;
}

