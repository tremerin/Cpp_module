/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 17:33:10 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/06/19 17:33:13 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
