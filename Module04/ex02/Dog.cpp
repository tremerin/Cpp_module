/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 19:45:13 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/06/29 20:46:08 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal("Dog")
{
    std::cout << _type << " constructor called" << std::endl;
    this->_brain = new Brain();
}

Dog::Dog(const Dog & src)
{
    *this = src;
}

Dog & Dog::operator=(const Dog & src)
{
    std::cout << "Dog copy constructor called." << std::endl;
    this->_type = src._type;
    this->_brain = new Brain(*src._brain);
    return *this;
}

Dog::~Dog()
{
    std::cout << _type << " destructor called" << std::endl;
    delete this->_brain;
}

void Dog::makeSound(void) const
{
    std::cout << "Wuaau" << std::endl;
}
