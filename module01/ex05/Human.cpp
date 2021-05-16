/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 14:49:33 by gdupont           #+#    #+#             */
/*   Updated: 2021/05/13 12:36:59 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"


Human::Human(void) {
}

Human::~Human(void) {	
}

std::string Human::identify(void) const {
	return (this->my_brain.identify());
}

const Brain* Human::getBrain(void) const
{
	return (&(this->my_brain));
}
