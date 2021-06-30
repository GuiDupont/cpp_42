/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 12:02:15 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/30 10:54:13 by gdupont          ###   ########.fr       */
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

		Form(std::string name, std::string target, int rankNeededToSign, int rankNeededToExec);
		Form(Form const & rhs);
		virtual ~Form(void);

		Form const & operator=(Form const & rhs);

		std::string getName() const;
		std::string getTarget() const;
		int			getRankNeededToSign() const;
		int			getRankNeededToExec() const;
		bool		getSignedStatus() const;

		void		setTarget(std::string const & target);
		void		beSigned(Bureaucrat & worker);
		void		canBeExecuted(Bureaucrat const & executor) const;

		virtual void execute (Bureaucrat const & executor) const = 0;
		virtual Form *returnSelfMalloc(std::string const & target) const = 0;
		
	
	protected:
	

	private:
	
		Form(void);
		const std::string	_name;
		std::string			_target;
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

