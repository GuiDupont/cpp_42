/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 14:49:30 by gdupont           #+#    #+#             */
/*   Updated: 2021/05/13 12:33:17 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <sys/time.h>
#include <unistd.h>


class Zombie {
	
	public:
	Zombie(std::string name, std::string type);
	Zombie(void);
	~Zombie(void);
	void announce(void) const;
	void setType(std::string newType);
	void setName(std::string newName);
	
	
	private:
	std::string name;
	std::string type;
	
};

#endif