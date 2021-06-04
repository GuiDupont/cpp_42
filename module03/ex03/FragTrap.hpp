/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 10:25:09 by gdupont           #+#    #+#             */
/*   Updated: 2021/05/25 14:54:49 by gdupont          ###   ########.fr       */
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

class FragTrap : public ClapTrap {
	public:

	FragTrap(void);
	FragTrap(std::string const & name);
	FragTrap(FragTrap const & tocopy);
	~FragTrap(void);

	bool	vaulthunter_dot_exe(std::string const & target);
	
	unsigned int const & 	getVaultHunterDmg(void) const;

	FragTrap const & operator=(FragTrap const & to_copy);
	
	private:

	unsigned int	_vaultHunterDmg;
};

#endif