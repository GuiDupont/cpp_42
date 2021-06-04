/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 10:25:16 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/02 12:19:24 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

void	doMeleeAttack(FragTrap & attacker, FragTrap & victim)
{
	bool attack_succeed;

	if (!attacker.getEnergyPts() || !victim.getEnergyPts())
		return ;
	std::cout << "/\\";
	attack_succeed = attacker.meleeAttack(victim.getName());
	std::cout << "/\\\n";
	if (attack_succeed)
	{
		std::cout << "/\\";
		victim.takeDamage(attacker.getMeleeDmg());
		std::cout << "/\\\n";
	}
}

void	doRangedAttack(FragTrap & attacker, FragTrap & victim) {
	bool attack_succeed;
	
	if (!attacker.getEnergyPts() || !victim.getEnergyPts())
		return ;
	std::cout << "/\\";
	attack_succeed = attacker.rangedAttack(victim.getName());
	std::cout << "/\\\n";
	if (attack_succeed)
	{
		std::cout << "/\\";
		victim.takeDamage(attacker.getRangedDmg());
		std::cout << "/\\\n";
	}
}

void	doVaultHunter(FragTrap & attacker, FragTrap & victim) {
 	bool attack_succeed;

	if (!attacker.getEnergyPts() || !victim.getEnergyPts())
		return ;
	std::cout << "/\\";
	attack_succeed = attacker.vaulthunter_dot_exe(victim.getName());
	std::cout << "/\\\n";
	if (attack_succeed)
	{
		std::cout << "/\\";
		victim.takeDamage(attacker.getVaultHunterDmg());
		std::cout << "/\\\n";
	}
}

int main(void)
{
	FragTrap god("God");
	FragTrap satan("Satan");
	ScavTrap hodor("Hodor");
	NinjaTrap ninja("Nakosa");
	
	srand(time(NULL));
	ninja.ninjaShoebox(ninja);
	ninja.ninjaShoebox(ninja);
	ninja.addHitpts(100);
	ninja.ninjaShoebox(god);
	ninja.ninjaShoebox(hodor);
	ninja.addHitpts(60);
	ninja.ninjaShoebox(hodor);
}