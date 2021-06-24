/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 08:54:57 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/24 14:56:45 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
# define ICE_H

#include "AMateria.hpp"
#include <iostream>
#include <string>

class Ice : public AMateria {


	public:
		Ice(void);
		Ice(Ice const & rhs);
		~Ice(void);

		Ice const & operator=(Ice const & rhs);

		virtual AMateria *clone() const;
		virtual void use(ICharacter & target);

	protected:
	private:
};

#endif

