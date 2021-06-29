/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 16:35:31 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/29 15:40:52 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form {
	public:

	ShrubberyCreationForm(ShrubberyCreationForm const & rhs);
	ShrubberyCreationForm(std::string target);
	~ShrubberyCreationForm(void);

	ShrubberyCreationForm const & operator=(ShrubberyCreationForm const & rhs);

	void execute (Bureaucrat const & executor) const;
	protected:

	private:
	ShrubberyCreationForm(void);
	
};

#endif

