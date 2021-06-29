/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 16:41:18 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/28 15:44:40 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) 
			: Enemy(170, "Super Mutant") {
		std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const & src) : Enemy(170, "Super Mutant") {
	*this = src;
}

SuperMutant::~SuperMutant(void) { 
		std::cout << "Aaaagrh..." << std::endl;
}

SuperMutant const & SuperMutant::operator=(SuperMutant const & rhs) {
	this->_type = rhs.getType();
	this->_hp = rhs.getHp();
	return (*this);
}

void		SuperMutant::takeDamage(int nb)
{
	nb -= 3;
	if (nb < 0)
		return ;
	this->_hp -= nb;
	if (this->_hp < 0)
		this->_hp = 0;
	std::cout << this->_type << ": I only have " << this->_hp 
	<< " hp!" << std::endl;
}
