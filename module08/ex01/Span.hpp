/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 07:17:45 by gdupont           #+#    #+#             */
/*   Updated: 2021/07/05 09:39:19 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H

#include <vector>
#include <iostream>
#include <vector>
#include <algorithm>
#include <time.h>

class Span {
	public:

		Span(unsigned int n);

		Span(Span const & rhs);
		~Span(void);

		Span const & operator=(Span const & rhs);

		void 				addNumber(int nb);
		int				shortestSpan(void);
		int				longestSpan(void);

		
		std::vector<int>	*getVector() const;

		template<typename Iterator>
		void			addRange(Iterator start, Iterator end) {
			try
			{
				if ((end - start) + this->_nb->size() > this->_nElemMax)
					throw (Span::limitReached());
				this->_nb->insert(this->_nb->end(), start, end);
			}
			catch (std::exception & e)
			{
				std::cout << e.what() << std::endl;
			}
		}
						

	protected:

	private:

	class limitReached : public std::exception { 
		virtual const char*  what() const throw() {
		return ("Max number of int reached"); 
		}
	};

	class notEnoughElem : public std::exception { 
		virtual const char*  what() const throw() {
		return ("Not enough elem exception"); 
		}
	};


	Span(void);
	std::vector<int>	*_nb;
	unsigned int		_nElemMax;

};

std::ostream & operator<<(std::ostream & o, Span const & rhs);

#endif

