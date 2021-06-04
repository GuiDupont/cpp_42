/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 11:51:41 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/04 13:45:37 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string const & name, std::string const & title) : \
		_name(name), _title(title) {
	print_string_upper(std::cout, this->_name);
	std::cout << ", ";
	print_string_upper(std::cout, this->_title);
	std::cout << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer(void) {
	print_string_upper(std::cout, this->_name);
	std::cout << ", ";
	print_string_upper(std::cout, this->_title);
	std::cout << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer const & Sorcerer::operator=(Sorcerer const & rhs) {
	this->_name = rhs._name;
	this->_title = rhs._title;
	return (*this);
}

Sorcerer::Sorcerer(Sorcerer const & rhs) {
	*this = rhs;
	print_string_upper(std::cout, this->_name);
	std::cout << ", ";
	print_string_upper(std::cout, this->_title);
	std::cout << ", is born!" << std::endl;	
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
	
	o << "I am ";
	print_string_upper(o, rhs.getName());
	o << ", ";
	print_string_upper(o, rhs.getTitle());
	o << ", and I like ponies!" << std::endl;
	return (o);
}

void Sorcerer::polymorph(Victim const & target) const
{
	target.getPolymorphed();
}
