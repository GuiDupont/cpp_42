/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 16:21:59 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/04 14:17:41 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_H
# define PLASMARIFLE_H

#include "Aweapon.hpp"

class PlasmaRifle : public Aweapon {
	public:

	PlasmaRifle(void);
	PlasmaRifle(PlasmaRifle const & src);
	virtual ~PlasmaRifle(void);

	PlasmaRifle const & operator=(PlasmaRifle const & rhs);

	virtual void attack(void) const;

	protected:

	private:
};

#endif

