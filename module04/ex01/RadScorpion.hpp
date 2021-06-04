/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 16:48:34 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/04 10:22:48 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RAD_SCORPION_H
# define RAD_SCORPION_H

#include "Enemy.hpp"

class RadScorpion : public Enemy {
	protected:

	public:
	RadScorpion(void);
	RadScorpion(RadScorpion const & src);

	virtual ~RadScorpion(void);

	RadScorpion const & operator=(RadScorpion const & to_copy);
	
	virtual void takeDamage(int nb);
};

#endif

