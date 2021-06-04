/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 14:13:43 by gdupont           #+#    #+#             */
/*   Updated: 2021/05/19 15:33:15 by gdupont          ###   ########.fr       */
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

class ScavTrap {
	public:

	ScavTrap(void);
	ScavTrap(std::string const & name);
	ScavTrap(ScavTrap const & tocopy);
	~ScavTrap(void);

	bool	rangedAttack(std::string const & target);
	bool	meleeAttack(std::string const & target);	
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	challengeNewcomer(void);
	
	std::string	const &		getName(void) const;
	unsigned int const &	getEnergyPts(void) const;
	unsigned int const & 	getMeleeDmg(void) const;
	unsigned int const & 	getRangedDmg(void) const;
	unsigned int const & 	getHitPts(void) const;
	unsigned int const &	getLevel(void) const;

	ScavTrap const & operator=(ScavTrap const & to_copy);

	private:

	std::string		_name;
	unsigned int	_hitPts;
	unsigned int	_maxHitPts;
	unsigned int	_energyPts;
	unsigned int	_maxEnergyPts;
	unsigned int	_level;
	unsigned int	_meleeAttackDmg;
	unsigned int	_rangedAttackDmg;
	unsigned int	_armorDmgReduction;
};

#endif