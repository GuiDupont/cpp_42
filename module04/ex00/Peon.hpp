/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 14:08:33 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/04 13:48:14 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_H
# define PEON_H

#include "Victim.hpp"


class Peon : virtual public Victim {
	public:

	Peon(void);
	Peon(std::string const & name);

	Peon(Peon const & rhs);
	~Peon(void);
	Peon const & operator=(Peon const & rhs);

	virtual void getPolymorphed(void) const;

	private:
};

#endif

