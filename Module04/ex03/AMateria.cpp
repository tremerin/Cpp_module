/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 17:49:40 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/07/02 23:27:58 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : _type("no type")
{
    std::cout << "AMateria " << _type << " constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type) : _type(type)
{
    std::cout << "AMateria " << _type << " constructor called" << std::endl;
}

AMateria::AMateria(AMateria const & src)
{
    std::cout << "AMateria copy constructor called" << std::endl;
    *this = src;
}

AMateria::~AMateria()
{
    std::cout << "AMateria " << _type << " destructor called" << std::endl;
}

std::string const & AMateria::getType() const
{
    return (this->_type);
}

void    AMateria::use( ICharacter& target )
{
    std::cout << "AMateria " << this->_type << " used on " << target.getName() << std::endl;
}