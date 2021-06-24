/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 12:26:18 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/24 15:44:04 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

# include "ICharacter.hpp"
# include <iostream>
# include <string>
# include <string.h>

class Character : public ICharacter {
	public:

		Character(std::string name);
		Character(Character const & rhs);
		virtual ~Character(void);

		Character const & operator=(Character const & rhs);

		std::string const & getName() const;

		void equip(AMateria * m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

	protected:

		Character(void);

	private:
		AMateria	*_inventory[4];
		std::string	_name;
		void		selfDestroy(void);

};

#endif

