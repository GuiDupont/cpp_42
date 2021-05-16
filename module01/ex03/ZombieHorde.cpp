/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 14:49:33 by gdupont           #+#    #+#             */
/*   Updated: 2021/05/13 12:36:59 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"


ZombieHorde::ZombieHorde(unsigned int nb) : size(nb)
{
	unsigned int i = 0;
	
	this->horde = new Zombie[nb];
	while (i < this->size)
	{
		this->horde[i].setName(randomName());
		this->horde[i].setType(randomType());
		i++;
	}
	std::cout << nb << " zombs created\n";
}

ZombieHorde::~ZombieHorde(void)
{
	std::cout << "\n";
	delete [] this->horde;
	
	std::cout << this->size << " zombs freed\n";	
}

void	ZombieHorde::announce(void) const
{
	unsigned int i = 0;

	std::cout << "Zombs, what is your profession ???\n";
	while (i < this->size)
	{
		this->horde[i].announce();
		i++;
	}	
}

std::string ZombieHorde::randomName(void) const
{
	int random;
	struct timeval tv;
	std::string names[9] = { "Maa-ya-ha", "Gouyen", "Lozen", 
				"Dahteste", "Nalin", "Sonsee-array",
				"Ih-tedda", "Jacali", "Bina" };
	
	gettimeofday(&tv, NULL);
	srand(tv.tv_usec);
	random = rand() % 8;
	usleep(random);
	return (names[random]);
}

std::string ZombieHorde::randomType(void) const
{
	int random;
	struct timeval tv;
	std::string names[9] = { "Killer", "Froussard", "Tank", 
				"Fast", "Lambda", "Glouton",
				"Intellect", "Fit", "Dev'" };
	gettimeofday(&tv, NULL);
	srand(tv.tv_usec);
	random = rand() % 8;
	usleep(random);
	return (names[random]);
}

