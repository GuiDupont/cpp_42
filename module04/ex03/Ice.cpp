/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 09:17:13 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/24 15:02:39 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice") { }

Ice::Ice(Ice const & rhs) {
	*this = rhs;
}

Ice::~Ice(void) { }


Ice const & Ice::operator=(Ice const & rhs) {
	if (this == &rhs)
		return (*this);
	AMateria::operator=(rhs);
	return (*this);
}

AMateria	*Ice::clone(void) const {
	Ice* copy = new Ice(*this);
	return (copy);
}

void Ice::use(ICharacter & target) {
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " 
	<< target.getName() << " *" << std::endl;
}
