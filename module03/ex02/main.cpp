/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 10:25:16 by gdupont           #+#    #+#             */
/*   Updated: 2021/05/25 15:07:38 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

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
	ScavTrap hodor("Hodor");
	
	srand(time(NULL));
	doMeleeAttack(god, satan);
	sleep(1);
	std::cout << std::endl;
	doRangedAttack(satan, god);
	sleep(1);
	std::cout << std::endl;
	god.beRepaired(20);
	sleep(1);
	std::cout << std::endl;
	god_bro = god;
	sleep(1);
	std::cout << std::endl;
	doMeleeAttack(god_bro, satan);
	sleep(1);
	std::cout << std::endl;
	doVaultHunter(god_bro, satan);
	sleep(1);
	std::cout << std::endl;
	doVaultHunter(god_bro, satan);
	sleep(1);
	std::cout << std::endl;
	doVaultHunter(god_bro, satan);
	sleep(1);
	std::cout << std::endl;
	doVaultHunter(god, satan);
	sleep(1);
	std::cout << std::endl;
	doVaultHunter(god, satan);
	sleep(1);
	std::cout << std::endl;
	hodor.challengeNewcomer();
	std::cout << hodor.getMeleeDmg() << " vs " << god.getMeleeDmg() << "\n";

}