/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 10:25:16 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/28 08:45:03 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap god("God");
	ClapTrap satan("Satan");
	ClapTrap god2("God2");

	god.attack(satan.getName());
	satan.takeDamage(god.getAttackDmg());
	god.beRepaired(20);
	god2 = god;
	return (0);
}