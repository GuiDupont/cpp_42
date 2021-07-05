/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 07:17:42 by gdupont           #+#    #+#             */
/*   Updated: 2021/07/05 09:26:23 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


Span::Span(unsigned int nb) : _nb(new std::vector<int>[nb]), _nElemMax(nb) {
	;
}

Span::~Span(void) {
	delete [] this->_nb;
}

Span::Span(Span const & rhs) : _nb(new std::vector<int>[rhs._nb->size()]) {
	*this = rhs;
}

Span const & Span::operator=(Span const & rhs) {
	if (this == &rhs)
		return (*this);
	delete [] this->_nb;
	this->_nElemMax = rhs._nElemMax;
	this->_nb = new std::vector<int>[rhs._nb->size()];
	for (int i = 0; i < static_cast<int>(rhs._nb->size()); i++)
		this->_nb[i] = rhs._nb[i];
	return (*this);
}

void Span::addNumber(int nb) {
	try
	{
		if (this->_nb->size() == this->_nElemMax)
			throw Span::limitReached();
		this->_nb->push_back(nb);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}

int		Span::shortestSpan(void) {
	int min = -1;
	
	try
	{
		if (this->_nb->size() <= 1)
			throw Span::notEnoughElem();
		else
		{
			std::sort(this->_nb->begin(), this->_nb->end());
			min = *(this->_nb->begin() + 1) - *(this->_nb->begin());
			for (std::vector<int>::const_iterator i = this->_nb->begin(); i + 1 != this->_nb->end(); ++i) {
				if (*(i + 1) - *i < min)
					min = *(i + 1) - *i;
			}				
		}
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}	
	return (min);
}

int		Span::longestSpan(void) {
	try
	{
		if (this->_nb->size() <= 1)
			throw Span::notEnoughElem();
		else
		{
			std::sort(this->_nb->begin(), this->_nb->end());
		}
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
		return (-1);
	}
	return (*(this->_nb->end() - 1) - *(this->_nb->begin()));		
}


std::vector<int>	*Span::getVector() const {
	return (this->_nb);
}


std::ostream & operator<<(std::ostream & o, Span const & rhs) {
	for (std::vector<int>::const_iterator i = rhs.getVector()->begin(); i != rhs.getVector()->end(); ++i)
    	o << *i << ' ';
	return (o);
}
