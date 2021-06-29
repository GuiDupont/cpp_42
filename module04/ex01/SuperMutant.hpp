/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 16:48:34 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/28 15:37:53 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_H
# define SUPERMUTANT_H

#include "Enemy.hpp"

class SuperMutant : public Enemy {
	protected:

	public:
	SuperMutant(void);
	SuperMutant(SuperMutant const & src);

	virtual ~SuperMutant(void);

	SuperMutant const & operator=(SuperMutant const & to_copy);
	
	virtual void takeDamage(int nb);
};

#endif

