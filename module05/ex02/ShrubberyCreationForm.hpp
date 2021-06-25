/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 16:35:31 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/25 16:37:50 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

#include "Form.hpp"

class ShrubberyCreationForm : public Form {
	public:

	ShrubberyCreationForm(ShrubberyCreationForm const & rhs);
	~ShrubberyCreationForm(void);

	ShrubberyCreationForm const & operator=(ShrubberyCreationForm const & rhs);

	protected:

	private:
	ShrubberyCreationForm(void);
};

#endif

