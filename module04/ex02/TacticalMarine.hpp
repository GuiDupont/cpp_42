/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 20:28:33 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/04 21:00:30 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_H
# define TACTICALMARINE_H

#include <iostream>
#include "ISpaceMarine.hpp"

class TacticalMarine : virtual public ISpaceMarine {
	public:

	TacticalMarine(void);
	TacticalMarine(TacticalMarine const & rhs);
	~TacticalMarine(void);

	TacticalMarine const & operator=(TacticalMarine const & rhs);

	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
	virtual ISpaceMarine*	getNext() const;
	virtual void 			setNext(ISpaceMarine *nouveau) ;
	ISpaceMarine*			clone() const;


	protected:

	private:
	ISpaceMarine *_next;
};

#endif
