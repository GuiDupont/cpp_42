/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 16:41:18 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/03 16:57:56 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void) 
			: Enemy(80, "RadScorpion") {
		std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const & src) {
	*this = src;
}

RadScorpion::~RadScorpion(void) { 
		std::cout << "SPROTCH *" << std::endl;
}

RadScorpion const & RadScorpion::operator=(RadScorpion const & rhs) {
	this->_type = rhs.getType();
	this->_hp = rhs.getHp();
	return (*this);
}

void		RadScorpion::takeDamage(int nb)
{
	if (nb < 0)
		return ;
	this->_hp -= nb;
	if (this->_hp < 0)
		this->_hp = 0;
	std::cout << this->_type << ": I only have " << this->_hp 
	<< " hp!" << std::endl;
}
