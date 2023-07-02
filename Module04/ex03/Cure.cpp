/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 17:50:07 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/07/03 00:14:39 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
    std::cout << "Cure constructor called" << std::endl;
}

Cure::Cure(Cure const & src) : AMateria("cure")
{
    *this = src;
    std::cout << "Cure copy constructor called" << std::endl;
}

Cure &  Cure::operator=(const Cure & src) 
{
    if (this != & src)
    {
        this->_type = src._type;
    }
    return *this;
}

Cure::~Cure()
{
    std::cout << "Cure destructor called" << std::endl;
}

AMateria *Cure::clone() const
{
    return (new Cure(*this));
}

void    Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}