/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 10:46:29 by gdupont           #+#    #+#             */
/*   Updated: 2021/07/02 14:54:23 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
#define ARRAY_H

#include <exception>
#include <iostream>

template <typename T>
class Array {

	public:
		int	size(void) const;

		Array(void) : _array(new T[0]), _size(0) { };
		Array(unsigned int n) : _array(new T[n]), _size(n) { };
		
		Array(Array & rhs);

		~Array(void);
		
		Array<T> const & operator=(Array const & rhs);
		T & operator[](int n);

	private:
		T 				*_array;
		int 	_size;
};

template<typename T>
int	Array<T>::size(void) const {
	return (this->_size);
}

template<typename T>
Array<T>::Array(Array & rhs) {
	this->_size = 0;
	*this = rhs;
}

template<typename T>
Array<T> const & Array<T>::operator=(Array<T> const & rhs) {
	if (this == &rhs)
		return (*this);
	if (this->_array && this->_size)
		delete [] this->_array;
	this->_array = new T[rhs._size];
	this->_size = rhs._size;
	for (int i = 0; i < this->_size; i++) {
		this->_array[i] = rhs._array[i];
	}
	return (*this);
}

template<typename T>
T & Array<T>::operator[](int n) {
	if (n >= this->_size || n < 0)
		throw (std::exception());
	return (this->_array[n]);
}

template<typename T>
Array<T>::~Array(void) {
	delete [] this->_array;
}

template<typename T>
void	printElem(Array<T> &array, int i) {
	try 
	{
		std::cout << array[i];
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
}

#endif
