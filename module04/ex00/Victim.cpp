/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 11:38:17 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/04 13:42:30 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(void) : _name("NoName") {
	std::cout << "Some random victim called ";
	print_string_upper(std::cout, this->_name);
	std::cout << " just appeared!" << std::endl;
}

Victim::Victim(std::string const & name) : _name(name) {
	
	std::cout << "Some random victim called ";
	print_string_upper(std::cout, this->_name);
	std::cout << " just appeared!" << std::endl;
}

Victim::~Victim(void) {
	std::cout << "Victim ";
	print_string_upper(std::cout, this->_name);
	std::cout << " just died for no apparent reason!" << std::endl;
}

Victim::Victim(Victim const & rhs)
{
	*this = rhs;
	std::cout << "Some random victim called ";
	print_string_upper(std::cout, this->_name);
	std::cout << " just appeared!" << std::endl;
}

Victim const & Victim::operator=(Victim const & rhs) {
	this->_name = rhs._name;
	return (*this);
}

std::string const & Victim::getName(void) const {
	return (this->_name);
}

std::ostream & operator<<(std::ostream & o, Victim const & rhs) {
	
	o << "I am ";
	print_string_upper(o, rhs.getName());
	o << ", and I like otters!" << std::endl;
	return (o);
}

void Victim::getPolymorphed(void) const {
	std::cout << this->getName() 
	<< " has been turned into a cute little sheep!" << std::endl;
}
