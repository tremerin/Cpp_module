/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 19:44:53 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/06/28 00:24:26 by fgalan-r         ###   ########.fr       */
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

void Cat::newIdea(const unsigned int i, const std::string idea)
{
    if (i < 100)
        this->_Brain->setIdea(i, idea);
}

void Cat::printfIdea(const unsigned int i)
{
    if (i < 100)
        std::cout << this->_Brain->getIdea(i) << std::endl;
}