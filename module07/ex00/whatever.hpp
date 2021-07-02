/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 09:39:38 by gdupont           #+#    #+#             */
/*   Updated: 2021/07/02 10:19:25 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP



template< typename T>
void	swap(T & a, T & b) {
	T c;

	c = a;
	a = b;
	b = c; 
}

template< typename T>
T		min(T const & a, T const & b) {
	return (a < b ? a : b);
}

template< typename T>
T		max(T const & a, T const & b) {
	return (a > b ? a : b);
}


# endif