/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 15:44:07 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/04 21:02:34 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void) {
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator(void) {
	std::cout << "I’ll be back..." << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const & rhs) {
	*this = rhs;
}

AssaultTerminator const & AssaultTerminator::operator=(AssaultTerminator const & rhs) {
	(void)rhs;
	return (*this);
}

void	AssaultTerminator::battleCry() const {
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void	AssaultTerminator::rangedAttack() const {
	std::cout << "* does nothing *" << std::endl;
}

void	AssaultTerminator::meleeAttack() const {
	std::cout << "* attacks with chainfists *" << std::endl;
}

ISpaceMarine*	AssaultTerminator::clone() const {
	ISpaceMarine *Copy = new AssaultTerminator();
	*Copy = *this;
	return (Copy);
}

ISpaceMarine*	AssaultTerminator::getNext() const {
	return (this->_next);
}

void	AssaultTerminator::setNext(ISpaceMarine *nouveau) {
	this->_next = nouveau;
}

