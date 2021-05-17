/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 14:56:26 by gdupont           #+#    #+#             */
/*   Updated: 2021/05/17 14:57:43 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed {
	
	public:

	Fixed(void);
	Fixed(Fixed const & tocopy);
	~Fixed(void);

	Fixed & operator=(Fixed const & nb );

	int	getRawBits(void) const;

	void setRawBits(int const raw);
	
	private:
	int _value;
	static int const _pos = 8;
	
};


#endif