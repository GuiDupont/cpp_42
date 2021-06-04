/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Goloum.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 14:13:20 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/04 13:38:18 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Goloum.hpp"

Goloum::Goloum(void) : Victim() {
	this->_name = "NoName";
	std::cout << "I am " << this->_name << 
	" and I am looking for my precious" << std::endl;
}

Goloum::Goloum(std::string const & name) : Victim(name) {
	_name = name;
	std::cout << "I am " << this->_name << 
	" and I am looking for my precious" << std::endl;
}

Goloum::~Goloum(void) {
	std::cout << "GOLOUUUUM" << std::endl;
}

Goloum::Goloum(Goloum const & rhs)
{
	*this = rhs;
	std::cout << "I am " << this->_name << 
	" and I am looking for my precious" << std::endl;
}

Goloum const & Goloum::operator=(Goloum const & rhs) {
	this->_name = rhs._name;
	return (*this);
}

void Goloum::getPolymorphed(void) const {
	std::cout << this->getName() 
	<< " has been turned into a cute duck!" << std::endl;
}
