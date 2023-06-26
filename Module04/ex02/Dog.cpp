/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 19:45:13 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/06/26 19:45:15 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << _type << " constructor called" << std::endl;
    this->_Brain = new Brain();
}

Dog::~Dog()
{
    std::cout << _type << " destructor called" << std::endl;
    delete this->_Brain;
}

void Dog::makeSound(void) const
{
    std::cout << "Wuaau" << std::endl;
}
