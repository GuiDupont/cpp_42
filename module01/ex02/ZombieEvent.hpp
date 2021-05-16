/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 14:56:26 by gdupont           #+#    #+#             */
/*   Updated: 2021/05/12 17:30:44 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_H
#define ZOMBIE_EVENT_H

#include "Zombie.hpp"


class ZombieEvent {
	
	public:

	ZombieEvent(std::string type);
	~ZombieEvent(void);

	void 		setZombieType(std::string type);
	Zombie* 	newZombie(std::string name) const;
	Zombie*		randomChump(void)	const;

	private:
	std::string type;
	std::string randomName(void) const;

	
};

#endif