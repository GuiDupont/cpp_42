/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 14:13:43 by gdupont           #+#    #+#             */
/*   Updated: 2021/05/25 14:37:24 by gdupont          ###   ########.fr       */
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

	ScavTrap(void);
	ScavTrap(std::string const & name);
	ScavTrap(ScavTrap const & tocopy);
	~ScavTrap(void);

	void	challengeNewcomer(void);

	//ScavTrap const & operator=(ScavTrap const & to_copy);

	private:

};

#endif