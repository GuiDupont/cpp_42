/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 10:25:16 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/28 14:28:03 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ClapTrap satan("Satan");
	ScavTrap jack("Jack");
	FragTrap frag("Frag");
	
	satan.attack(jack.getName());
	jack.takeDamage(satan.getAttackDmg());
	jack.attack(satan.getName());
	satan.takeDamage(jack.getAttackDmg());
	jack.guardGate();
	frag.highFivesGuys();
	
	return (0);
}