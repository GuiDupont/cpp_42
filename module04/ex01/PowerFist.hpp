/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 16:21:54 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/04 14:17:50 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_H
# define POWERFIST_H

#include "Aweapon.hpp"

class PowerFist : public Aweapon {
	public:

	PowerFist(void);
	PowerFist(PowerFist const & src);
	virtual ~PowerFist(void);

	PowerFist const & operator=(PowerFist const & rhs);

	virtual void attack(void) const;

	protected:

	private:
};

#endif

