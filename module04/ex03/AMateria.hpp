/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 07:43:30 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/24 16:14:20 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H

#include <iostream>
#include "ICharacter.hpp"
class ICharacter;

class AMateria {
	private:
		std::string		_type;
		unsigned int	_xp;
		
	protected:
		AMateria(void);
	
	public:
		AMateria(std::string const & type);
		AMateria(AMateria const & rhs);
		virtual ~AMateria(void);
		AMateria const & operator=(AMateria const & rhs);

		std::string const & getType() const;
		unsigned int getXP() const;

		virtual AMateria* clone() const = 0;

		virtual void use(ICharacter & target);

	
};

#endif

