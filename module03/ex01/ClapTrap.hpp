/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 10:25:09 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/28 14:10:33 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <sys/time.h>

#include <unistd.h>


class ClapTrap {
	public:

		ClapTrap(std::string const & name);
		ClapTrap(ClapTrap const & rhs);
		~ClapTrap(void);

		void	attack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		
		std::string	const &		getName(void) const;
		unsigned int const &	getEnergyPts(void) const;
		unsigned int const & 	getAttackDmg(void) const;
		
		unsigned int const & 	getHitPts(void) const;

		ClapTrap const & operator=(ClapTrap const & to_copy);

	private:
		ClapTrap(void);

	protected:
		std::string		_name;
		unsigned int	_hitPts;
		unsigned int	_energyPts;
		unsigned int	_attackDmg;
	

};

#endif