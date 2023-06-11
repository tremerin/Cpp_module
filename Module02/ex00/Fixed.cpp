#include "Fixed.hpp"

Fixed::Fixed() : _integer(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits menber function called" << std::endl;
    //std::cout << this->_integer << std::endl;
    return (this->_integer);
}

void Fixed::setRawBits(int const raw)
{
    _integer = raw;
}

Fixed & Fixed::operator=(const Fixed & rhs)
{
    std::cout << "Assignation operator called" << std::endl;
    this->_integer = rhs.getRawBits();
    return (*this);
}

/*
Integer & Integer::operator=(const Integer &rhs) {
	std::cout << "Assignment operator called from " << this->_n;
	std::cout << " to " << rhs.getValue() << std::endl;

	this->_n = rhs.getValue();

	return *this;
}
*/