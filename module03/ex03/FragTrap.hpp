/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 10:25:09 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/28 10:40:52 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <sys/time.h>
#include <unistd.h>
#include "ClapTrap.hpp"
#include <stdint.h>


class FragTrap : virtual public ClapTrap {
	public:

	FragTrap(void);
	FragTrap(std::string const & name);
	FragTrap(FragTrap const & tocopy);
	~FragTrap(void);
	
	void	attack(std::string const & target);

	FragTrap const & operator=(FragTrap const & to_copy);

	void highFivesGuys(void);
	
	private:

	unsigned int	_vaultHunterDmg;
};

#endif