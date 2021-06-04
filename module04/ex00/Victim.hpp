#ifndef VICTIM_H
# define VICTIM_H

#include <iostream>
#include <string.h>
#include "common_fct.hpp"

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

