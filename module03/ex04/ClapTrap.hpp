/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 15:54:51 by gdupont           #+#    #+#             */
/*   Updated: 2021/05/25 15:50:52 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <sys/time.h>
#include <unistd.h>
#include <stdint.h>

class ClapTrap {
	public:

	ClapTrap(void);
	ClapTrap(std::string const & name);
	ClapTrap(ClapTrap const & tocopy);
	~ClapTrap(void);

	bool	rangedAttack(std::string const & target);
	bool	meleeAttack(std::string const & target);	
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	addHitpts(unsigned int amount);
	
	std::string	const &		getName(void) const;
	unsigned int const &	getEnergyPts(void) const;
	unsigned int const & 	getMeleeDmg(void) const;
	unsigned int const & 	getRangedDmg(void) const;
	unsigned int const & 	getHitPts(void) const;
	unsigned int const &	getLevel(void) const;

	ClapTrap const & operator=(ClapTrap const & to_copy);

	protected:

	std::string		_name;
	unsigned int	_hitPts;
	unsigned int	_maxHitPts;
	unsigned int	_energyPts;
	unsigned int	_maxEnergyPts;
	unsigned int	_level;
	unsigned int	_meleeAttackDmg;
	unsigned int	_rangedAttackDmg;
	unsigned int	_armorDmgReduction;

	private:
};

#endif