/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 19:44:53 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/06/26 19:44:54 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << _type << " constructor called" << std::endl;
    this->_Brain = new Brain();
}

Cat::~Cat()
{
    std::cout << _type << " destructor called" << std::endl;
    delete this->_Brain;
}

void Cat::makeSound(void) const
{
    std::cout << "Miauu" << std::endl;
}
