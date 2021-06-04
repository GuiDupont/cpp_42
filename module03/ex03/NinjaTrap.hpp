/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 15:10:36 by gdupont           #+#    #+#             */
/*   Updated: 2021/05/25 15:50:31 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"


class NinjaTrap : public ClapTrap {
	public:

	NinjaTrap(void);
	NinjaTrap(std::string const & name);
	NinjaTrap(NinjaTrap const & tocopy);
	~NinjaTrap(void);

	NinjaTrap const & operator=(NinjaTrap const & to_copy);
	
	void ninjaShoebox(NinjaTrap & target);
	void ninjaShoebox(FragTrap & target);
	void ninjaShoebox(ScavTrap & target);
	
};

