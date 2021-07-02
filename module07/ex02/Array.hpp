/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 10:46:29 by gdupont           #+#    #+#             */
/*   Updated: 2021/07/02 12:09:16 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
#define ARRAY_H

template <typename T>
class Array {

	public:
		int	size(void) const;

		Array(void) : _array(new T[0]) { };
		Array(unsigned int n) : _array(new T[n]), _size(n) { };
		
		Array(Array & rhs);
		
		Array const & operator=(Array const & rhs);
		Array const & operator[](Array const & rhs);

	private:
		T 				*_array;
		unsigned int 	_size;
};

template<typename T>
Array<T> const & Array<T>::operator=(Array<T> const & rhs) {
	if (this == &rhs)
		return (*this);
	delete [] this->_array;
	this->_array = new T[rhs->_size];
	this->_size = rhs->_size;
	for (int i = 0; i < this->_size; i++) {
		this->_array[i] = rhs->_array[i];
	}
	return (*this);
}

#endif
