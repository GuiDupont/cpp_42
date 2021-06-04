/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 10:25:16 by gdupont           #+#    #+#             */
/*   Updated: 2021/05/25 15:01:47 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

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
	FragTrap god_bro;

	srand(time(NULL));
	doMeleeAttack(god, satan);
	doRangedAttack(satan, god);
	god.beRepaired(20);
	god_bro = god;
	doMeleeAttack(god_bro, satan);
	doVaultHunter(god_bro, satan);
	doVaultHunter(god_bro, satan);
	doVaultHunter(god_bro, satan);
	doVaultHunter(god, satan);
	doVaultHunter(god, satan);	
}