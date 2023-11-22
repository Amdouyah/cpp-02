#include "Fixed.hpp"

fixed::fixed()
{
	this->fixed_p = 0;
}

fixed::~fixed()
{
	std::cout << "Destructor called" << std::endl;
}

fixed::fixed(const fixed &new_fixed)
{
	*this = new_fixed;
}
int fixed::getRawBits() const
{
	return fixed_p;
}

void fixed::setRawBits( int const raw )
{
	this->fixed_p = raw;
}