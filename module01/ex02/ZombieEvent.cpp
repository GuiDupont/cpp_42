/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 14:49:33 by gdupont           #+#    #+#             */
/*   Updated: 2021/05/13 11:38:47 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(std::string type)
{
	this->type = type;
	std::cout << "Type is " << type << "\n\n";
}

ZombieEvent::~ZombieEvent(void)
{
}

std::string ZombieEvent::randomName(void) const
{
	int random;

	std::string names[9] = { "Maa-ya-ha", "Gouyen", "Lozen", 
				"Dahteste", "Nalin", "Sonsee",
				"Ih-tedda", "Jacali", "Bina" };
	srand(time(NULL));
	random = rand() % 8;
	return (names[random]);
}

void	ZombieEvent::setZombieType(std::string type)
{
	this->type = type;
	std::cout << "New type is " << this->type << "\n\n";

}



Zombie* ZombieEvent::newZombie(std::string name) const
{
	Zombie *newZ = new Zombie(name, this->type);
	return (newZ);
}

Zombie*	ZombieEvent::randomChump(void) const
{
	return (this->newZombie(randomName()));
}