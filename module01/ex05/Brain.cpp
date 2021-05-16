/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 14:49:27 by gdupont           #+#    #+#             */
/*   Updated: 2021/05/13 12:49:14 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"


Brain::Brain(void) : volume(12), nb_neurals(5)
{

}

Brain::~Brain(void)
{
	
}

std::string Brain::identify(void) const
{
	std::stringstream address_stream;
	std::string address;
	address_stream << this;
	address = address_stream.str();
	return (address);
}

int 	Brain::getNb_neurals(void)
{
	return (this->nb_neurals);
}