/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Aweapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 15:06:11 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/04 14:15:52 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_H
# define AWEAPON_H

#include <iostream>

class Aweapon {
	protected:
	std::string _name;
	int 		_Damage;
	int 		_APcost;

	public:

	Aweapon(void);
	Aweapon(std::string const & name, int damage, int apcost);
	Aweapon(Aweapon const & rhs);
	virtual ~Aweapon(void);

	Aweapon const & operator=(Aweapon const & to_copy);

	std::string virtual getName() const;
	int 				getAPCost() const;
	int					getDamage() const;
	
	virtual void attack() const = 0;
};

#endif
