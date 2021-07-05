/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 09:59:21 by gdupont           #+#    #+#             */
/*   Updated: 2021/07/05 12:16:34 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

#include <stack>
#include <iostream>
#include <iterator>


template<typename T>
class Mutantstack : public std::stack<T>{
	public:

		class stackIterator : public std::deque<T>::iterator { };
		
		Mutantstack(void) : std::stack<T>() {};
		Mutantstack(Mutantstack const & rhs)  : std::stack<T>(rhs) {  };
		~Mutantstack(void) { };

		Mutantstack<T> & operator=(Mutantstack<T> const & rhs);
		
		typedef typename std::deque<T>::iterator iterator;

		iterator end(void) { return (std::stack<T>::c.end());};
		iterator begin(void) { return (std::stack<T>::c.begin());};
		


	protected:

	private:
};

template<typename T>
Mutantstack<T> & Mutantstack<T>::operator=(Mutantstack<T> const & rhs) 
{ 
	std::stack<T>::operator=(rhs);
	return (*this);
};

#endif
