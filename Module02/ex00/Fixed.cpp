/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 17:31:04 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/06/19 17:31:17 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
