/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 12:02:15 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/29 15:48:05 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	public:

		Form(std::string name, int rankNeededToSign, int rankNeededToExec);
		Form(Form const & rhs);
		~Form(void);

		Form const & operator=(Form const & rhs);

		std::string getName() const;
		int			getRankNeededToSign() const;
		bool		getSignedStatus() const;
		void		beSigned(Bureaucrat & worker);
		
	
	protected:
	

	private:
	
		Form(void);
		const std::string	_name;
		bool				_signed;
		const int			_rankNeededToSign;
		const int			_rankNeededToExec;

	
	class GradeTooLowException : public std::exception
	{ 
		virtual const char*  what() const throw() {
		return ("I catched a too low exception for the form"); 
		}
	};
	
	class GradeTooHighException : public std::exception
	{ 
		virtual const char*  what() const throw() {
		return ("I catched a too high exception for the form");
		}
	};
	
};

std::ostream & operator<<(std::ostream & o, Form const & rhs);


#endif

