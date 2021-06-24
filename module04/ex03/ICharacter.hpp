/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 09:50:37 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/24 15:37:07 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_H
# define ICHARACTER_H

#include <iostream>
#include "AMateria.hpp"
class AMateria;


class ICharacter {
	public:

	virtual 		~ICharacter(void) {}
	virtual 		std::string const & getName() const = 0;
	virtual void 	equip(AMateria * m) = 0;
	virtual void 	unequip(int idx) = 0;
	virtual void 	use(int idx, ICharacter& target) = 0;
	
};

#endif

