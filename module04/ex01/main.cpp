/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 15:39:38 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/28 15:45:33 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Aweapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"
#include "BaguetteDeSureau.hpp"


int main()
{
	Aweapon *plasma = new PlasmaRifle;
	Aweapon *power = new PowerFist;

	SuperMutant* spm = new SuperMutant;
	RadScorpion* scp = new RadScorpion;
	
	Character	character("Jean");
	Character	character2("Paul");
	Aweapon *bds = new BaguetteDeSureau;

	std::cout << std::endl << "######## JEAN VS SUPERMUTANT ########" << std::endl << std::endl;
	std::cout << character;
	character.equip(plasma);
	std::cout << character;
	character.attack(spm);
	character.equip(bds);
	std::cout << character;
	character.attack(spm);
	character.attack(spm);
	
	std::cout << std::endl << "######## JEAN A VAINCU ########" << std::endl;

	std::cout << std::endl << "######## PAUL VS SCORPIO ########" << std::endl << std::endl;
	std::cout << character2;
	character2.attack(scp);
	character2.equip(power);
	character2.attack(scp);

	std::cout << character2;
	character2.recoverAP();
	std::cout << character2;

	character2.equip(bds);
	std::cout << character2;
	character2.attack(scp);
		
	std::cout << std::endl << "######## PAUL A VAINCU ########" << std::endl;
	delete plasma;
	delete power;
	delete bds;
}

//clang++ -Wall -Wextra -Werror -fsanitize=address --std=c++98 *.cpp  && ./a.out
