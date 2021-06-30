/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 16:35:23 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/30 10:52:22 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", target, 72, 45) {
	
}

RobotomyRequestForm::~RobotomyRequestForm(void) {

}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & rhs) : Form("RobotomyRequestForm", rhs.getTarget(), 72, 45) {
	*this = rhs;
}

RobotomyRequestForm const & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs) {
	if (this == &rhs)
		return (*this);
	Form::operator=(rhs);
	return (*this);
	
}

void RobotomyRequestForm::execute (Bureaucrat const & executor) const {
	if (this->getSignedStatus() != true)
	{
		std::cout << "Form is not signed, it can't be executed\n";
		return ;
	}
	try
	{
		Form::canBeExecuted(executor);
		std::cout << "Gzzzzzzzzzz Gzzzzzzzzzz Gzzzzzzzzzzzzz\n";
    	srand(time(NULL));
		if (rand() % 2)
			std::cout << this->getTarget() << " has been robotomized!" << std::endl;
        else
        	std::cout << this->getTarget() << " could not be robotomized!" << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl; 
	}	
}

Form	*RobotomyRequestForm::returnSelfMalloc(std::string const & target) const {
	return (new RobotomyRequestForm(target));
}
