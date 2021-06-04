/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 12:22:08 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/02 13:32:03 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap {
	public:

	SuperTrap(void);
	SuperTrap(std::string const & name);
	SuperTrap(SuperTrap const & tocopy);
	~SuperTrap(void);

//	SuperTrap const & operator=(SuperTrap const & to_copy);
	
	bool	meleeAttack(std::string const & target);	
	bool	rangedAttack(std::string const & target);	
	
};



