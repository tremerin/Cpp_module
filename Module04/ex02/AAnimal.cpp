/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 19:44:34 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/06/30 12:32:59 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("AAnimal")
{
    std::cout << _type << " constructor called" << std::endl;
}

AAnimal::AAnimal(std::string type) : _type(type)
{
    std::cout << "Animal " << _type << " constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal & src)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = src;
}

AAnimal::~AAnimal()
{
    std::cout << "Animal destructor called" << std::endl;
}

AAnimal & AAnimal::operator=(AAnimal const & src)
{
    if ( this != & src )
        this->_type = src._type;
    return (*this);
}

std::string AAnimal::getType(void) const
{
    return (this->_type);
}

void AAnimal::setType(std::string const type)
{
    this->_type = type;
}

/*void AAnimal::makeSound(void) const
{
    std::cout << "Animal make sound" << std::endl;
}*/

