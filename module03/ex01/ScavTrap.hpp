/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 14:13:43 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/28 09:35:27 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <sys/time.h>
#include <unistd.h>
#include <stdint.h>

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	public:

	ScavTrap(std::string const & name);
	ScavTrap(ScavTrap const & tocopy);
	~ScavTrap(void);

	void	attack(std::string const & target);
	
	void	guardGate();

	ScavTrap const & operator=(ScavTrap const & to_copy);

	private:
	ScavTrap(void);

};

#endif