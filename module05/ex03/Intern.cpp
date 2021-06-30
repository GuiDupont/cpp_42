/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 09:21:26 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/30 11:13:18 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void) {
	this->_allFormTypes[0] = new PresidentialPardonForm("noTarget");
	this->_allFormTypes[1] = new RobotomyRequestForm("noTarget");
	this->_allFormTypes[2] = new ShrubberyCreationForm("noTarget");
}

Intern::~Intern(void) {
	for (int i = 0; i < NbForms; i++)
		delete _allFormTypes[i];
}

Intern::Intern(Intern const & rhs) {
	*this = rhs;
}

Intern const & Intern::operator=(Intern const & rhs) {
	(void)rhs;
	return (*this);
}

Form	*Intern::makeForm(std::string const & formName, std::string const & target) {
	for (int i = 0; i < NbForms; i++) {
		if (_allFormTypes[i]->getName() == formName)
			return (_allFormTypes[i]->returnSelfMalloc(target));
	}
	std::cout << "We can't find a form of this type :" << formName << std::endl;
	return (NULL);
}
