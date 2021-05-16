/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 14:56:21 by gdupont           #+#    #+#             */
/*   Updated: 2021/05/13 11:39:20 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main(void)
{
	ZombieEvent zomb_event = ZombieEvent("Standard_zomb");
	Zombie		king = Zombie("Julian", "King_zomb");
	Zombie		*normal;
	Zombie		*warrior;
	Zombie		*queen;

	normal = zomb_event.newZombie("Johnny");
	zomb_event.setZombieType("Warrior_zomb");
	warrior = zomb_event.newZombie("Isildur");
	zomb_event.setZombieType("Queen_zomb");
	
	queen = zomb_event.randomChump();
	warrior->announce();
	delete normal;
	delete warrior;
	delete queen;
	return (0);
}
