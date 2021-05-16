/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 14:49:27 by gdupont           #+#    #+#             */
/*   Updated: 2021/05/13 11:37:10 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string the_name, std::string the_type) :  name(the_name), type(the_type)
{
	this->announce();
}

Zombie::~Zombie(void)
{
	std::cout << this->name << ", " << this->type << " is dead\n";
}

void	Zombie::announce(void) const
{
	std::cout << this->name << ", " << this->type << " Braiiiiiiiiiiiiinnnns ...\n";
}

