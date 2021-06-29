/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 11:38:17 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/28 15:13:00 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(void) : _name("NoName") {
	std::cout << "Some random victim called " << this->_name
	<< " just appeared!" << std::endl;
}

Victim::Victim(std::string const & name) : _name(name) {
	
	std::cout << "Some random victim called " << this->_name
	<< " just appeared!" << std::endl;
}

Victim::~Victim(void) {
	std::cout << "Victim " <<
	this->_name << " just died for no apparent reason!" << std::endl;
}

Victim::Victim(Victim const & rhs)
{
	*this = rhs;
	std::cout << "Some random victim called " <<
	this->_name << " just appeared!" << std::endl;
}

Victim const & Victim::operator=(Victim const & rhs) {
	this->_name = rhs._name;
	return (*this);
}

std::string const & Victim::getName(void) const {
	return (this->_name);
}

std::ostream & operator<<(std::ostream & o, Victim const & rhs) {
	
	o << "I am " << rhs.getName() 
	<< ", and I like otters!" << std::endl;
	return (o);
}

void Victim::getPolymorphed(void) const {
	std::cout << this->getName() 
	<< " has been turned into a cute little sheep!" << std::endl;
}
