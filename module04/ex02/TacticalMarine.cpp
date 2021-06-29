/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 15:44:07 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/05 17:45:55 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void) {
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::~TacticalMarine(void) {
	std::cout << "Aaargh..." << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const & rhs) {
	*this = rhs;
}

TacticalMarine const & TacticalMarine::operator=(TacticalMarine const & rhs) {
	(void)rhs;
	return (*this);
}

void	TacticalMarine::battleCry() const {
	std::cout << "For the holy PLOT!" << std::endl;
}

void	TacticalMarine::rangedAttack() const {
	std::cout << "* attacks with a bolter *" << std::endl;
}

void	TacticalMarine::meleeAttack() const {
	std::cout << "* attacks with a chainsword *" << std::endl;
}

ISpaceMarine*	TacticalMarine::clone() const {
	ISpaceMarine *Copy = new TacticalMarine();
	*Copy = *this;
	return (Copy);
}

ISpaceMarine*	TacticalMarine::getNext() const {
	return (this->_next);
}

void	TacticalMarine::setNext(ISpaceMarine *nouveau) {
	this->_next = nouveau;
}
