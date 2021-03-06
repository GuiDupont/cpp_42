/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 20:28:33 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/05 16:35:56 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AssaultTerminator_H
# define AssaultTerminator_H

#include <iostream>
#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine {
	public:

	AssaultTerminator(void);
	AssaultTerminator(AssaultTerminator const & rhs);
	~AssaultTerminator(void);

	AssaultTerminator const & operator=(AssaultTerminator const & rhs);

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
