/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 11:51:41 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/28 15:10:53 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string const & name, std::string const & title) : \
		_name(name), _title(title) {
	std::cout << this->_name << ", " << this->_title 
	<< ", is born!" << std::endl;
}

Sorcerer::~Sorcerer(void) {
	std::cout << this->_name << ", " << this->_title 
	<< ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer const & Sorcerer::operator=(Sorcerer const & rhs) {
	this->_name = rhs._name;
	this->_title = rhs._title;
	return (*this);
}

Sorcerer::Sorcerer(Sorcerer const & rhs) {
	*this = rhs;
	std::cout << this->_name << ", " << this->_title 
	<< ", is born!" << std::endl;	
}

std::string const & Sorcerer::getName(void) const
{
	return (this->_name);
}

std::string const & Sorcerer::getTitle(void) const
{
	return (this->_title);
}

std::ostream & operator<<(std::ostream & o, Sorcerer const & rhs) {
	
	o << "I am " << rhs.getName() << ", "
	<< rhs.getTitle() <<", and I like ponies!" << std::endl;
	return (o);
}

void Sorcerer::polymorph(Victim const & target) const
{
	target.getPolymorphed();
}
