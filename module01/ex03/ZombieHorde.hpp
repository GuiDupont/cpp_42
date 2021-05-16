/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 14:56:26 by gdupont           #+#    #+#             */
/*   Updated: 2021/05/13 12:29:14 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HORDE_H
#define ZOMBIE_HORDE_H

#include "Zombie.hpp"


class ZombieHorde {
	
	public:

	ZombieHorde(unsigned int nb);
	~ZombieHorde(void);
	void announce(void) const;

	private:
	unsigned int size;
	Zombie *horde;
	std::string randomName(void) const;
	std::string randomType(void) const;


	
};

#endif