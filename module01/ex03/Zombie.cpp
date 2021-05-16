/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 14:49:27 by gdupont           #+#    #+#             */
/*   Updated: 2021/05/13 12:37:28 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string the_name, std::string the_type) :  name(the_name), type(the_type)
{
	this->announce();
}

Zombie::Zombie(void)
{}

Zombie::~Zombie(void)
{
	std::cout << this->name << ", " << this->type << " is dead\n";
}

void	Zombie::announce(void) const
{
	std::cout << this->name << ", " << this->type << " Braiiiiiiiiiiiiinnnns ...\n";
}

void Zombie::setType(std::string newType)
{
	this->type = newType;
}

void Zombie::setName(std::string newName)
{
	this->name = newName;
}

