/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 16:35:26 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/25 16:37:43 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H

#include "Form.hpp"

class RobotomyRequestForm : public Form {
	public:

	RobotomyRequestForm(RobotomyRequestForm const & rhs);
	~RobotomyRequestForm(void);

	RobotomyRequestForm const & operator=(RobotomyRequestForm const & rhs);

	protected:

	private:
	RobotomyRequestForm(void);
};

#endif

