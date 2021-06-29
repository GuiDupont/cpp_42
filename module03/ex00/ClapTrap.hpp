/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 10:25:09 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/28 08:25:47 by gdupont          ###   ########.fr       */
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
	ClapTrap(ClapTrap const & tocopy);
	~ClapTrap(void);

	// bool	rangedAttack(std::string const & target);
	// bool	meleeAttack(std::string const & target);
	void	attack(std::string const & target);

	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	bool	vaulthunter_dot_exe(std::string const & target);
	
	std::string	const &		getName(void) const;
	unsigned int const &	getEnergyPts(void) const;
	unsigned int const & 	getAttackDmg(void) const;
	
	// unsigned int const & 	getMeleeDmg(void) const;
	// unsigned int const & 	getRangedDmg(void) const;
	// unsigned int const & 	getVaultHunterDmg(void) const;
	unsigned int const & 	getHitPts(void) const;
	// unsigned int const &	getLevel(void) const;

	

	ClapTrap const & operator=(ClapTrap const & to_copy);

	private:
	ClapTrap(void);

	std::string		_name;
	unsigned int	_hitPts;
	unsigned int	_energyPts;
	unsigned int	_attackDmg;

	// unsigned int	_maxHitPts;
	// unsigned int	_maxEnergyPts;
	// unsigned int	_level;
	// unsigned int	_meleeAttackDmg;
	// unsigned int	_rangedAttackDmg;
	// unsigned int	_armorDmgReduction;
	// unsigned int	_vaultHunterDmg;
};

#endif