/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 14:59:03 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/28 15:14:40 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_H
# define SORCERER_H

#include <iostream>
#include <string.h>
#include "Victim.hpp"

class Sorcerer {
	public:

	Sorcerer(std::string const & name, std::string const & title);
	Sorcerer(Sorcerer const & rhs);
	~Sorcerer(void);

	Sorcerer const & operator=(Sorcerer const & to_copy);

	std::string const & getName(void) const;
	std::string const & getTitle(void) const;

	void polymorph(Victim const &) const;


	private:
	std::string _name;
	std::string _title;
	Sorcerer(void);
};

std::ostream & operator<<(std::ostream & o, Sorcerer const & rhs);

#endif

