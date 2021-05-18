/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 15:16:26 by gdupont           #+#    #+#             */
/*   Updated: 2021/05/17 22:53:55 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed(void) : _value(0) {
	std::cout << "Default constructor called\n"; 
	return;
}

Fixed::Fixed(Fixed const & tocopy) {
	std::cout << "Copy constructor called\n";
	*this = tocopy;
	return ;
}

Fixed::Fixed(int const value) : _value(roundf(value * (1 << this->_pos))) {
	std::cout << "Int constructor called\n";
	return ;
}

Fixed::Fixed(float const value) : 
				_value(roundf(value * (1 << this->_pos))) {
	std::cout << "Float constructor called\n";

	return ;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called\n";
}

Fixed &	Fixed::operator=(Fixed const & tocopy) {
	std::cout << "Assignation operator called\n";
	this->setRawBits(tocopy.getRawBits());
	return (*this);
}

int 	Fixed::getRawBits(void) const {
	return (this->_value);
}

void	Fixed::setRawBits(int const raw) {
	this->_value = raw;
}

int		Fixed::getPos(void) const {
	return (this->_pos);
}

std::ostream & operator<<(std::ostream & o, Fixed const & i) {
	o << ((float)i.getRawBits() / (float)(1 << i.getPos()));
	return (o);
}

int		Fixed::toInt(void) const {
	return ((int)(this->getRawBits() / (1 << this->_pos)));
}
