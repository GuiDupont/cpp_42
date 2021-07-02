/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 10:18:45 by gdupont           #+#    #+#             */
/*   Updated: 2021/07/02 10:44:41 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template< typename T >
void	displayArray(T *array, int len) {
	for (int i = 0; i < len; i++)
		std::cout << array[i] << " ";
	std::cout << std::endl;
}

template<typename T>
void	add1(T* elem) {
	*elem += 1;	
}

template<typename T>
void	multiplyBy2(T* elem) {
	*elem *= 2;
}


template< typename T >
void	iter(T *array, int len, void (*f)(T*)) {
	for (int i = 0; i < len; i++)
		f(&array[i]);
}

# endif