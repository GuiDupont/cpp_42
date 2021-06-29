/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 10:25:16 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/28 14:08:34 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	ClapTrap satan("Satan");
	DiamondTrap diamond("Didi");
	ScavTrap	scav("Scav");
	DiamondTrap diamond2(diamond);
	
	
	diamond.whoAmI();
	diamond2.whoAmI();
	diamond.attack(satan.getName());
	satan.takeDamage(diamond.getAttackDmg());
	diamond.guardGate();
	diamond.highFivesGuys();
	return (0);
}