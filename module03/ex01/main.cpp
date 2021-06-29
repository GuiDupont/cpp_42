/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 10:25:16 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/28 09:52:06 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap satan("Satan");
	ScavTrap jack("Jack");
	
	satan.attack(jack.getName());
	jack.takeDamage(satan.getAttackDmg());
	jack.attack(satan.getName());
	satan.takeDamage(jack.getAttackDmg());
	jack.guardGate();
	
	return (0);
}