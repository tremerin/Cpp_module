#include "Fixed.hpp"

Fixed::Fixed(void) : _integer(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed::Fixed(const int n) : _integer(n << _bits)
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float n) : _integer(std::roundf(n * (1 <<_bits)))
{
    std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    //std::cout << "getRawBits menber function called" << std::endl;
    return (this->_integer);
}

void Fixed::setRawBits(int const raw)
{
    _integer = raw;
}

float Fixed::toFloat(void) const
{
    return(static_cast<float>(_integer) / (1 << _bits));
}

int Fixed::toInt(void) const
{
    return(_integer >> _bits);
}

/* Operators */
Fixed & Fixed::operator=(const Fixed & rhs)
{
    std::cout << "Assignation operator called" << std::endl;
    this->_integer = rhs.getRawBits();
    return (*this);
}

std::ostream & operator<<(std::ostream & o, Fixed const & i) 
{
    o << i.toFloat();
    return (o);
}

bool Fixed::operator>(Fixed const & rhs) const
{
    return(this->getRawBits() > rhs.getRawBits());
}

bool Fixed::operator<(Fixed const & rhs) const
{
    return(this->getRawBits() < rhs.getRawBits());
}

bool Fixed::operator>=(Fixed const & rhs) const
{
    return(this->getRawBits() >= rhs.getRawBits());
}

bool Fixed::operator<=(Fixed const & rhs) const
{
    return(this->getRawBits() <= rhs.getRawBits());
}

bool Fixed::operator==(Fixed const & rhs) const
{
    return(this->getRawBits() == rhs.getRawBits());
}

bool Fixed::operator!=(Fixed const & rhs) const
{
    return(this->getRawBits() != rhs.getRawBits());
}

Fixed Fixed::operator + (const Fixed & rhs) const
{
    return(Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed Fixed::operator - (const Fixed & rhs) const
{
    return(Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed Fixed::operator * (const Fixed & rhs) const
{
    return(Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed Fixed::operator / (const Fixed & rhs) const
{
    return(Fixed(this->toFloat() / rhs.toFloat()));
}

Fixed & Fixed::operator ++ (void)
{
    Fixed & temp = *this;
    ++temp._integer;
    return(temp);
}

Fixed Fixed::operator ++ (int)
{
    Fixed temp(*this);
    temp._integer = this->_integer++;
    return (temp);
}

Fixed & Fixed::operator -- (void)
{
    Fixed & temp = *this;
    --temp._integer;
    return(temp);
}

Fixed Fixed::operator -- (int)
{
    Fixed temp(*this);
    temp._integer = this->_integer--;
    return (temp);
}

Fixed & Fixed::max(Fixed &a, Fixed &b)
{
    if (a.getRawBits() >= b.getRawBits())
        return (a);
    else
        return (b);
}

Fixed & Fixed::min(Fixed &a, Fixed &b)
{
    if (a.getRawBits() <= b.getRawBits())
        return (a);
    else
        return (b);
}

const Fixed & Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a.getRawBits() >= b.getRawBits())
        return (a);
    else
        return (b);
}

const Fixed & Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a.getRawBits() <= b.getRawBits())
        return (a);
    else
        return (b);
}