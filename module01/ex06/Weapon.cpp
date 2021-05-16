/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 14:49:27 by gdupont           #+#    #+#             */
/*   Updated: 2021/05/16 19:44:13 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


Weapon::Weapon(std::string newType) : _type(newType)
{
	
}

Weapon::~Weapon(void)
{
	
}

const std::string&	Weapon::getType(void) const
{
	return (this->_type);
}

void 			Weapon::setType(std::string NewType)
{
	this->_type = NewType;
}
