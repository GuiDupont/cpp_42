/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Goloum.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 14:08:33 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/03 14:36:55 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GOLOUM_H
# define GOLOUM_H

#include "Victim.hpp"


class Goloum : virtual public Victim {
	public:

	Goloum(void);
	Goloum(std::string const & name);

	Goloum(Goloum const & tocopy);
	~Goloum(void);
	Goloum const & operator=(Goloum const & to_copy);

	virtual void getPolymorphed(void) const;

	private:
};

#endif

