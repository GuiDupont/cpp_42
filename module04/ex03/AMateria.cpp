/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 08:38:38 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/24 14:54:38 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type), _xp(0) { }

AMateria::AMateria(void) : _xp(0) { }

AMateria::~AMateria(void) { }

AMateria::AMateria(AMateria const & rhs) {
	*this = rhs;
}

AMateria const & AMateria::operator=(AMateria const & rhs) {
	if (this == &rhs)
		return (*this);
	this->_xp = rhs._xp;
	return (*this);
}

void AMateria::use(ICharacter& target) {
	this->_xp += 10;
	(void)target;
}

std::string const & AMateria::getType() const {
	return (this->_type);
}

unsigned int		AMateria::getXP() const {
	return (this->_xp);
}
