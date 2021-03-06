/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 15:16:26 by gdupont           #+#    #+#             */
/*   Updated: 2021/05/17 15:55:47 by gdupont          ###   ########.fr       */
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

Fixed::~Fixed(void) {
	std::cout << "Destructor called\n";
}

Fixed &	Fixed::operator=(Fixed const & tocopy) {
	std::cout << "Assignation operator called\n";
	this->setRawBits(tocopy.getRawBits());
	return (*this);
}

int 	Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called\n";
	return (this->_value);
}

void	Fixed::setRawBits(int const raw) {
	this->_value = raw;
}

int main(void) {
	Fixed a;
	Fixed b(a);
	Fixed c;
	
	c = b;
	
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	
	return 0;
}

//clang++ -Wall -Wextra -Werror--std=c++98 *.cpp
//./a.out && ./a.out > mine && diff mine expected.txt
//
