/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 14:49:30 by gdupont           #+#    #+#             */
/*   Updated: 2021/05/16 19:41:34 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>

class Weapon {
	
	public:
	Weapon(std::string type);
	Weapon(void);
	~Weapon(void);

	const std::string&	getType(void) const;
	void				setType(std::string type);
	
	
	private:
	std::string _type;
	
};

#endif