/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BaguetteDeSureau.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 16:21:59 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/04 14:17:33 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BAGUETTE_SUREAU_H
# define BAGUETTE_SUREAU_H

#include "Aweapon.hpp"

class BaguetteDeSureau : public Aweapon {
	public:

	BaguetteDeSureau(void);
	BaguetteDeSureau(BaguetteDeSureau const & src);
	virtual ~BaguetteDeSureau(void);

	BaguetteDeSureau const & operator=(BaguetteDeSureau const & rhs);

	virtual void attack(void) const;

	protected:

	private:
};

#endif

