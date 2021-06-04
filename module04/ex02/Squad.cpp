#include "Squad.hpp"

Squad::Squad(void) {

}

Squad::~Squad(void) {

}

Squad::Squad(Squad const & rhs) {
	*this = rhs;
}

Squad const & Squad::operator=(Squad const & rhs) {
	*this = rhs
	return (*this);
}


