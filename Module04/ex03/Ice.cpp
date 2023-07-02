/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 17:50:28 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/07/03 00:15:23 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
    std::cout << "Ice constructor called" << std::endl;
}

Ice::Ice(Ice const & src) : AMateria("ice")
{
    *this = src;
    std::cout << "Ice copy constructor called" << std::endl;
}

Ice &   Ice::operator=(const Ice & src) 
{
    if (this != & src)
    {
        this->_type = src._type;
    }
    return *this;
}

Ice::~Ice()
{
    std::cout << "Ice destructor called" << std::endl;
}

AMateria *Ice::clone() const
{
    return (new Ice(*this));
}

void    Ice::use( ICharacter& target )
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}