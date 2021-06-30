/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 16:35:21 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/30 10:54:22 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

#include "Form.hpp"

class PresidentialPardonForm : public Form {
	public:

	PresidentialPardonForm(PresidentialPardonForm const & rhs);
	PresidentialPardonForm(std::string target);
	
	~PresidentialPardonForm(void);

	PresidentialPardonForm const & operator=(PresidentialPardonForm const & rhs);

	void execute(Bureaucrat const & executor) const;
	
	Form	*returnSelfMalloc(std::string const & target) const;

	protected:

	private:
	PresidentialPardonForm(void);
	std::string _target;
};

#endif

