#ifndef SORCERER_H
# define SORCERER_H

#include <iostream>
#include <string.h>
#include "Victim.hpp"
#include "common_fct.hpp"

class Sorcerer {
	public:

	Sorcerer(std::string const & name, std::string const & title);
	Sorcerer(Sorcerer const & tocopy);
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

