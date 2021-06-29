/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 14:46:25 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/05 16:35:48 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_H
# define SQUAD_H

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"
#include <iostream>


class Squad : public ISquad {
	public:
	Squad(void);
	~Squad(void);
	Squad(int nb);
	Squad(Squad const & rhs);
	
	Squad & operator=(Squad const & rhs);

	virtual int getCount() const;
	virtual ISpaceMarine* getUnit(int) const;
	virtual int push(ISpaceMarine*);
	
	void	delete_squad();
	

	protected:

	private:
	int				_count;
	ISpaceMarine	*_units;
};

#endif

