/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                            		        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 14:56:26 by gdupont           #+#    #+#             */
/*   Updated: 2021/05/13 12:29:14 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.hpp"

class HumanB {
	
	public:

	HumanB(std::string name);
	~HumanB(void);

	void attack(void) const;
	void setWeapon(Weapon &newWeapon);
	

	private:
	std::string _name;
	Weapon* 	_Weapon;
};

#endif