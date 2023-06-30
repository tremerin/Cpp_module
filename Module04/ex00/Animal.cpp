/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 19:40:13 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/06/30 12:36:43 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
    std::cout << _type << " constructor called" << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
    std::cout << "Animal " << _type << " constructor called" << std::endl;
}

Animal::Animal(const Animal & src)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = src;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

Animal & Animal::operator=(Animal const & src)
{
    if ( this != & src )
        this->_type = src._type;
    return (*this);
}

std::string Animal::getType(void) const
{
    return (this->_type);
}

void Animal::setType(std::string const type)
{
    this->_type = type;
}

void Animal::makeSound(void) const
{
    std::cout << "Animal make sound" << std::endl;
}

