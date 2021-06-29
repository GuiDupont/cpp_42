/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 15:19:20 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/28 15:49:09 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"


Squad::Squad(void) : _count(0), _units(NULL) {

}


Squad::~Squad(void) {
	std::cout << "TIME TO KILL SQUAD -----> \n";
	this->delete_squad();
}

Squad::Squad(Squad const & rhs) {
	this->_units = NULL;
	*this = rhs;
}

Squad & Squad::operator=(Squad const & rhs) {
	ISpaceMarine *current;

	this->delete_squad();
	current = rhs._units;
	while (current)
	{
		this->push(current->clone());
		current = current->getNext();
	}
	this->_count = rhs._count;
	return (*this);
}

int		Squad::getCount() const
{
	return (this->_count);
}

ISpaceMarine*	Squad::getUnit(int nb) const {
	int i = 0;
	ISpaceMarine *current;

	if (nb > _count)
		return (NULL);
	current = this->_units;
	while (current)
	{
		if (i == nb)
			return (current);
		current = current->getNext();
		i++;
	}
	return (NULL);
}

int		Squad::push(ISpaceMarine* toPush) {
	ISpaceMarine *current;

	if (!toPush)
		return (this->_count);
	toPush->setNext(NULL);
	this->_count += 1;
	if (!this->_units)
	{
		this->_units = toPush;
		return (this->_count);
	}
	current = this->_units;
	while (current->getNext())
		current = current->getNext();
	current->setNext(toPush);
	return (this->_count);
}

void	Squad::delete_squad() {
	ISpaceMarine* next;
	ISpaceMarine* current;

	current = this->_units;
	while (current)
	{
		next = current->getNext();
		delete current;
		current = next;
	}
	this->_units = NULL;
}
