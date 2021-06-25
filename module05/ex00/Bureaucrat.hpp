/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 10:25:33 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/25 14:15:59 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <string>
#include <iostream>

class Bureaucrat {
	public:
	Bureaucrat(std::string const name, int rank);
	Bureaucrat(Bureaucrat const & rhs);
	~Bureaucrat(void);

	Bureaucrat const & operator=(Bureaucrat const & rhs);

	std::string getName() const;
	int			getRank() const;

	void		incRank();
	void		decRank();
	
	class GradeTooLowException : public std::exception
	{ 
		virtual const char*  what() const throw() {
		return ("I catched a too high exception"); 
		}
	};
	
	class GradeTooHighException : public std::exception
	{ 
		virtual const char*  what() const throw() {
		return ("I catched a too low exception");
		}
	};
	
	protected:

	private:
	Bureaucrat(void);
	const std::string	_name;
	int					_rank;
	 
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs);


#endif

