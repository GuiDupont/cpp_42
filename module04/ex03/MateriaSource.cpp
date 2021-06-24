/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 11:10:17 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/24 16:50:30 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) {
	int i = -1;
	while (++i < 4)
		this->_learned[i] = NULL;

}

MateriaSource::~MateriaSource(void) {
	this->deleteLearned();
}

MateriaSource::MateriaSource(MateriaSource const & rhs) {
	*this = rhs;
}

MateriaSource const & MateriaSource::operator=(MateriaSource const & rhs) {
	if (this == &rhs)
		return (*this);
	this->deleteLearned();
	for (int i = 0; i < 4; i++)
		this->_learned[i] = rhs._learned[i]->clone();
	return (*this);
}

void	MateriaSource::learnMateria(AMateria* m) {
	
	if (!m)
		return ;
	int i = -1;
	while (++i < 4)
	{
		if (this->_learned[i] == NULL)
		{
			this->_learned[i] = m;
			return ;
		}
	}
	delete m;
}

AMateria*	MateriaSource::createMateria(std::string const & type) {
	int i = 0;
	while (i < 4)
	{
		if (this->_learned[i] && this->_learned[i]->getType() == type)
			return (this->_learned[i]->clone());
		i++;
	}
	return (NULL);
}

void		MateriaSource::deleteLearned(void)
{
	for (int i = 0; i < 4; i++)
	{
		delete this->_learned[i];
		this->_learned[i] = NULL;
	}
}