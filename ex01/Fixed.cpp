#include "Fixed.hpp"

Fixed::Fixed()
{
	this->fixed_p = 0;
	std::cout <<"Default constructor called"<< std::endl;
	
}

Fixed::Fixed(const int x)
{
	this->fixed_p = x * ft_iterative_power(2, frac);
}
Fixed::Fixed(const float z)
{
	this->fixed_p = roundf(z * ft_iterative_power(2, frac));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &new_fixed)
{
	*this = new_fixed;
	std::cout <<"copy constructor called"<< std::endl;
}

Fixed &Fixed::operator =(const Fixed &new_fixed)
{
	fixed_p = new_fixed.getRawBits();
	std::cout <<"Copy assignment operator called"<<std::endl;
	return *this;
}
int Fixed::getRawBits() const
{
	std::cout <<"getRawBits member function called"<< std::endl;
	return fixed_p;
}

void Fixed::setRawBits( int const raw )
{
	this->fixed_p = raw;
}
float Fixed::toFloat()const
{
	return this->fixed_p / ft_iterative_power(2, frac);
};

int Fixed::toInt( void ) const
{
	return this->fixed_p / ft_iterative_power(2, frac);
}