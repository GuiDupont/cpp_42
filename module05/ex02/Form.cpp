/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 12:07:10 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/25 16:59:49 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, std::string target, int rankNeededToSign, int rankNeededToExec) : _name(name), _target(target), _signed(false), 
_rankNeededToSign(rankNeededToSign), _rankNeededToExec(rankNeededToExec) {
	
	if (rankNeededToSign > 150 || rankNeededToExec > 150)
		throw Form::GradeTooHighException();
	else if (rankNeededToSign < 1 || rankNeededToExec < 1)
		throw Form::GradeTooLowException();
}

Form::~Form(void) {}

Form::Form(Form const & rhs) : _name("None"), _signed(false), _rankNeededToSign(1)
	, _rankNeededToExec(1) {
	*this = rhs;	
}

Form const & Form::operator=(Form const & rhs) {
	this->_signed = rhs._signed;
	return (*this);
}

std::string Form::getName() const {
	return (this->_name);
}

int 		Form::getRankNeededToSign() const {
	return (this->_rankNeededToSign);
}

int			Form::getRankNeededToExec() const {
	return (this->_rankNeededToExec);
}

bool		Form::getSignedStatus() const {
	return (this->_signed);
}

void		Form::beSigned(Bureaucrat & worker) {
	try 
	{
		if (worker.getRank() > this->getRankNeededToSign())
			throw Form::GradeTooLowException();
		else
			this->_signed = true;
			
	}
	catch (std::exception e) {
		std::cout << "I catched a too low exception for the rank needed\n"; 
	}

}

std::ostream & operator<<(std::ostream & o, Form const & rhs) {
	o << "The form " << rhs.getName() << ", need a bureaucrat of rank " << rhs.getRankNeededToSign()
	<< " to be signed and its signed status is: " << rhs.getSignedStatus() << std::endl;
	return (o);
}


