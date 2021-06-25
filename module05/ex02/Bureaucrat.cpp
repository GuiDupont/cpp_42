/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 10:25:22 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/25 16:27:15 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) { }

Bureaucrat::Bureaucrat(std::string const name, int rank) : _name(name) { 
	try 
	{
		if (rank > 150)
			throw Bureaucrat::GradeTooHighException();
		else if (rank < 1)
			throw Bureaucrat::GradeTooLowException();
		else 
			this->_rank = rank;
	}
	catch (Bureaucrat::GradeTooHighException e) {
		std::cout << "I catched a too high exception\n"; 
	}
	catch (Bureaucrat::GradeTooLowException e) {
		std::cout << "I catched a too low exception\n"; 
	}
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
		return ;
	this->_rank--;
}

void		Bureaucrat::decRank() {
	if (this->_rank == 150)
		return ;
	this->_rank++;
}

void		Bureaucrat::signForm(Form & theForm) {
	try 
	{
		if (this->getRank() > theForm.getRankNeededToSign())
			throw Bureaucrat::GradeTooLowException();
		theForm.beSigned(*this);
		std::cout << this->getName() << " signs " << theForm.getName() << std::endl;
	}
	catch (std::exception & e) {
		std::cout << this->getName() << " cant signs " << theForm.getName() 
		<< " because " << e.what() << std::endl;	
	}
	theForm.beSigned(*this);
}