/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 14:13:20 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/28 15:04:10 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string const & name) : Victim(name) {
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon(void) {
	std::cout << "Bleuark..." << std::endl;
}

Peon::Peon(Peon const & rhs)
{
	*this = rhs;
	std::cout << "Zog zog." << std::endl;	
}

Peon const & Peon::operator=(Peon const & rhs) {
	this->_name = rhs._name;
	return (*this);
}

void Peon::getPolymorphed(void) const {
	std::cout << this->getName() 
	<< " has been turned into a pink pony!" << std::endl;
}
