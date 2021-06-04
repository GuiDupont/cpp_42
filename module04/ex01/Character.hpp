/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 10:25:10 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/04 11:14:38 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

#include "Enemy.hpp"
#include "Aweapon.hpp"

class Character {
	public:

	Character(void);
	Character(std::string const & name);
	Character(Character const & rhs);
	~Character(void);

	Character const & operator=(Character const & rhs);

	int				getAP() const;
	Aweapon 		*getWeapon() const;

	void recoverAP();
	void equip(Aweapon* weapon);
	void attack(Enemy* enemy);
	std::string virtual getName() const;
	
	protected:

	private:

	std::string _name;
	int			_AP;
	Aweapon		*_weapon;
};

std::ostream & operator<<(std::ostream & o, Character const & rhs);

#endif
