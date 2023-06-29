/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 19:44:53 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/06/29 20:46:08 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal("Cat")
{
    std::cout << _type << " constructor called" << std::endl;
    this->_brain = new Brain();
}

Cat::Cat(const Cat & src)
{
    *this = src;
}

Cat & Cat::operator=(const Cat & src)
{
    std::cout << "Cat copy constructor called." << std::endl;
    this->_type = src._type;
    this->_brain = new Brain(*src._brain);
    return *this;
}

Cat::~Cat()
{
    std::cout << _type << " destructor called" << std::endl;
    delete this->_brain;
}

void Cat::makeSound(void) const
{
    std::cout << "Miauu" << std::endl;
}

void Cat::newIdea(const unsigned int i, const std::string idea)
{
    if (i < 100)
        this->_brain->setIdea(i, idea);
}

void Cat::printfIdea(const unsigned int i)
{
    if (i < 100)
        std::cout << this->_brain->getIdea(i) << std::endl;
}