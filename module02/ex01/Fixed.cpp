/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 15:16:26 by gdupont           #+#    #+#             */
/*   Updated: 2021/05/17 17:02:04 by gdupont          ###   ########.fr       */
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

Fixed::Fixed(int const value) : _value(value << Fixed::_pos) {
	std::cout << "Int constructor called\n";
	return ;
}

Fixed::Fixed(float const value) : _value(value * pow(8,2)) {
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
	//std::cout << "getRawBits member function called\n";
	return (this->_value);
}

void	Fixed::setRawBits(int const raw) {
	this->_value = raw;
}

int main(void) {
	Fixed 		a;
	Fixed const b(10);
	Fixed const c(42.42f);
	Fixed const d(b);

	a = Fixed(1234.4321f);

	// std::cout << "a is " << a << std::endl;
	// std::cout << "b is " << a << std::endl;
	// std::cout << "c is " << a << std::endl;
	// std::cout << "d is " << a << std::endl;
	
	// std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	// std::cout << "b is " << a.toInt() << " as integer" << std::endl;
	// std::cout << "c is " << a.toInt() << " as integer" << std::endl;
	// std::cout << "d is " << a.toInt() << " as integer" << std::endl;
	
	return 0;
}

//clang++ -Wall -Wextra -Werror --std=c++98 *.cpp
//./a.out && ./a.out > mine && diff mine expected.txt
//
