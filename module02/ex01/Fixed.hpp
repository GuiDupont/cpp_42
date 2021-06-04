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
#include <cmath>

class Fixed {
	
	public:

	Fixed(void);
	Fixed(Fixed const & tocopy);
	Fixed(const int value);
	Fixed(const float value);
	~Fixed(void);

	Fixed & operator=(Fixed const & nb );

	int		getRawBits(void) const;
	int		getPos(void) const;

	void	setRawBits(int const raw);

	int		toInt(void) const;
	float	toFloat(void) const;

	
	private:
	int _value;
	static int const _pos = 8;
};

std::ostream & operator<<(std::ostream & o, Fixed const & i);
#endif

