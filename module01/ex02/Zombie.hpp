/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 14:49:30 by gdupont           #+#    #+#             */
/*   Updated: 2021/05/12 17:13:32 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <stdlib.h>
#include <time.h>
#include <iostream>


class Zombie {
	
	public:
	Zombie(std::string name, std::string type);
	~Zombie(void);
	void announce(void) const;
	
	private:
	std::string name;
	std::string type;
	
};

#endif