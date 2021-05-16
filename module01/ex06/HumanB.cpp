/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 14:49:33 by gdupont           #+#    #+#             */
/*   Updated: 2021/05/13 12:36:59 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"


HumanB::HumanB(std::string newName) : _name(newName) {
}

HumanB::~HumanB(void) {	
}

void HumanB::setWeapon(Weapon &newWeapon) {
	this->_Weapon = &newWeapon;
}

void HumanB::attack(void) const {
	std::cout << this->_name << " attacks with his " << this->_Weapon->getType() << std::endl;
}
