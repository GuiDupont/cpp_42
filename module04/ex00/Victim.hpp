/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 15:14:45 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/28 15:14:47 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_H
# define VICTIM_H

#include <iostream>
#include <string.h>

class Victim {
	public:

	Victim(void);
	Victim(std::string const & name);
	Victim(Victim const & tocopy);
	~Victim(void);

	Victim const & operator=(Victim const & to_copy);

	std::string const & getName(void) const;

	virtual void getPolymorphed() const;

	protected:
	std::string _name;

	private:
};

std::ostream & operator<<(std::ostream & o, Victim const & rhs);

#endif

