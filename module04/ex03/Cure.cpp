/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 14:25:14 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/24 16:15:40 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure") {

}

Cure::~Cure(void) {

}

Cure::Cure(Cure const & rhs) {
	*this = rhs;
}

Cure const & Cure::operator=(Cure const & rhs) {
	if (this == &rhs)
		return (*this);
	AMateria::operator=(rhs);
	return (*this);
}

AMateria * Cure::clone() const {
	Cure* copy = new Cure(*this);
	return (copy);
}

void		Cure::use(ICharacter &target) {
	AMateria::use(target);
	std::cout << "* heals " << target.getName()
	<< "'s wounds *" << std::endl;
}
