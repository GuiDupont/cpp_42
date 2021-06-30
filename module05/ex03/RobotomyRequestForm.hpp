/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 16:35:26 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/30 10:54:54 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H

#include "Form.hpp"
#include <stdlib.h>


class RobotomyRequestForm : public Form {
	public:

		RobotomyRequestForm(RobotomyRequestForm const & rhs);
		RobotomyRequestForm(std::string target);

		~RobotomyRequestForm(void);

		RobotomyRequestForm const & operator=(RobotomyRequestForm const & rhs);

		void	execute (Bureaucrat const & executor) const;

		Form	*returnSelfMalloc(std::string const & target) const;

	protected:

	private:
		RobotomyRequestForm(void);
};

#endif

