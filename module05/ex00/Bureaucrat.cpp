/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 10:25:22 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/29 12:59:29 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) { }

Bureaucrat::Bureaucrat(std::string const name, int rank) : _name(name) { 
	if (rank > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (rank < 1)
		throw Bureaucrat::GradeTooHighException();
	this->_rank = rank;
}

Bureaucrat::~Bureaucrat(void) {
}

Bureaucrat const & Bureaucrat::operator=(Bureaucrat const & rhs) {
	this->_rank = rhs._rank;
	return (*this);
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs) {
	o << rhs.getName() << ", bureaucrat grade " << rhs.getRank() << std::endl;
	return (o);
}

Bureaucrat::Bureaucrat(Bureaucrat const & rhs) {
	*this = rhs;
}

std::string Bureaucrat::getName() const {
	return (this->_name);
}

int 		Bureaucrat::getRank() const {
	return (this->_rank);
}

void		Bureaucrat::incRank() {
	if (this->_rank == 1)
		throw Bureaucrat::GradeTooHighException();
	this->_rank--;
}

void		Bureaucrat::decRank() {
	if (this->_rank == 150)
		throw Bureaucrat::GradeTooLowException();
	this->_rank++;
}
