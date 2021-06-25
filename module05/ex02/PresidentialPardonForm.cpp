/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 16:35:18 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/25 16:59:22 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", target, 25, 5) {
	
}

PresidentialPardonForm::~PresidentialPardonForm(void) {

}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & rhs) {
	*this = rhs;
}

PresidentialPardonForm const & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs) {
	if (this == &rhs)
		return (*this);
	Form::operator=(rhs);
	return (*this);
}

void PresidentialPardonForm::execute (Bureaucrat const & executor) {
	try
	{
		if (execute.getRank() > this.getRankNeededToExec())
			throw Bureaucrat::GradeTooLowException();		
	}
	catch
}
