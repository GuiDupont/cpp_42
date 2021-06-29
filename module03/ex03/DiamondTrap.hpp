/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 10:41:04 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/28 11:42:15 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
	public:

	DiamondTrap(std::string const & name);
	DiamondTrap(DiamondTrap const & rhs);
	~DiamondTrap(void);
	void	attack(std::string const & target);

	DiamondTrap const & operator=(DiamondTrap const & rhs);

	void	whoAmI() const;
	protected:

	private:
	DiamondTrap(void);
	std::string		_name;	

};


#endif

