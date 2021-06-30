/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 09:21:29 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/30 11:13:24 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
# define INTERN_H

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

# define NbForms 3

class Intern {
	public:

	Intern(void);
	Intern(Intern const & rhs);
	~Intern(void);

	Form	*makeForm(std::string const & formName, std::string const & target);

	Intern const & operator=(Intern const & rhs);
	
	protected:

	private:
	Form	*_allFormTypes[NbForms];
};

#endif

