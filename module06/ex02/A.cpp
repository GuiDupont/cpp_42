/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 16:53:31 by gdupont           #+#    #+#             */
/*   Updated: 2021/07/01 17:02:05 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"

A::A(void) {

}

A::~A(void) {

}

A::A(A const & rhs) {
	*this = rhs;
}

A const & A::operator=(A const & rhs) {
	(void)rhs;
	return (*this);
}

