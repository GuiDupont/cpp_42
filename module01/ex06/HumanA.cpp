/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 14:49:33 by gdupont           #+#    #+#             */
/*   Updated: 2021/05/16 20:05:32 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


HumanA::HumanA(std::string newName, Weapon& newWeapon) : _name(newName), _Weapon(newWeapon) {
	
}

HumanA::~HumanA(void) {	
}

void HumanA::attack(void) const {
	std::cout << this->_name << " attacks with his " << this->_Weapon.getType() << std::endl;
}
