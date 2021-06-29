/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 16:35:18 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/29 16:31:23 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", target, 25, 5) {
	
}

PresidentialPardonForm::~PresidentialPardonForm(void) {

}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & rhs) : Form("PresidentialPardonForm", rhs._target, 25, 5) {
	*this = rhs;
}

PresidentialPardonForm const & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs) {
	if (this == &rhs)
		return (*this);
	Form::operator=(rhs);
	return (*this);
}

void PresidentialPardonForm::execute (Bureaucrat const & executor) const {
	if (this->getSignedStatus() != true)
	{
		std::cout << "Form is not signed, it can't be executed\n";
		return ;
	}
	try
	{
		Form::canBeExecuted(executor);
		std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox\n";
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl; 
	}	
}