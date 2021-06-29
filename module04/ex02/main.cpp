/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student->42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 15:44:54 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/05 16:31:14 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ISpaceMarine.hpp"
#include "ISquad.hpp"
#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"


int main(void)
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	TacticalMarine* Paul = new TacticalMarine;
	Squad* vlc = new Squad;
	Squad* copycat = new Squad;
	
	std::cout << "\nWE TEST PUSH FUNCTION\n\n";
	std::cout << "There are " << vlc->getCount() << " ISpaceMarine in the squad" << std::endl;
	vlc->push(bob);
	vlc->push(jim);
	vlc->push(NULL);
	std::cout << "There are " << vlc->getCount() << " ISpaceMarine in the squad" << std::endl;
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	std::cout << "\nWE TEST DEEP COPY AND CLONE\n\n";
	*copycat = *vlc;
	std::cout << "There are " << copycat->getCount() << " ISpaceMarine in the squad" << std::endl;
	for (int i = 0; i < copycat->getCount(); ++i)
	{
		ISpaceMarine* cur = copycat->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	std::cout << "\n";
	copycat->push(Paul);
	std::cout << "\nWE TEST COPY CONSTRUCTOR\n\n";
	Squad last(*copycat);
	std::cout << "There are " << last.getCount() << " ISpaceMarine in the squad" << std::endl;
	for (int i = 0; i < last.getCount(); ++i)
	{
		ISpaceMarine* cur = last.getUnit(i);
		cur->battleCry();

	}
	delete vlc;
	delete copycat;
}
