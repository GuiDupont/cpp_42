/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 14:13:40 by gdupont           #+#    #+#             */
/*   Updated: 2021/05/25 15:08:24 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
	{
	std::cout << "ScavTrap named " << this->_name 
	<< " is alive\n";
}

ScavTrap::ScavTrap(std::string const & name) : ClapTrap(name) {
	std::cout << "ScavTrap called " << this->_name
	<< " is alive\n";
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap named " << this->_name << " just past away\n";
}

int	getIntFromCin(std::string to_print, int min, int max) {
	int i = 0;

	while (1)
	{
		std::cout << to_print;
		std::cin >> i;
		if (!std::cin.fail() && i >= min && i <= max)
			return (i);
		std::cin.clear();
		std::cin.ignore(INT32_MAX, '\n');
	}
}

void		ScavTrap::challengeNewcomer(void) {
	int choice = 0;

	std::string challenge[3] = { "faire un concours de gobage de hot-dog", "faire un bras de fer chinois", 
					"monter des oeufs en neige avec une fourchette" };
	std::cout	<< "Salut etranger, je suis le gardien de la taverne, pour entrer tu dois relever un defi : \n- " 
	<< challenge[0] << "\n- " << challenge[1] << "\n- " << challenge[2] << "\n";
	choice = getIntFromCin("Fais ton choix en indiquant 1,2 ou 3\n", 1, 3) - 1;
	std::cout << "tu as donc choisi de " << challenge[choice] << " coquin va\n";
}
