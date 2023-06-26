/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 19:40:45 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/06/26 19:40:46 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << _type << " constructor called" << std::endl;
}

Dog::~Dog()
{
    std::cout << _type << " destructor called" << std::endl;
}

void Dog::makeSound(void) const
{
    std::cout << "Wuaau" << std::endl;
}
