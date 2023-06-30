/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WorngCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 19:46:11 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/06/30 12:35:36 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WorngCat.hpp"

WorngCat::WorngCat() : WorngAnimal("Cat")
{
    std::cout << _type << " constructor called" << std::endl;
}

WorngCat::~WorngCat()
{
    std::cout << _type << " destructor called" << std::endl;
}

void WorngCat::makeSound(void) const
{
    std::cout << "Miauu" << std::endl;
}
