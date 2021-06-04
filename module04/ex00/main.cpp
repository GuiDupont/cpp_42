/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 10:26:36 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/03 14:46:58 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Goloum.hpp"

int main()
{
	Sorcerer	robert("Robert", "the Magnificient");
	Victim		jim("Jimmy");
	Peon		joe("Joe");
	Goloum		gogo("Gogo");

	std::cout << robert << jim << joe << gogo;
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(gogo);
}