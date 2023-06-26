/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WorngCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 19:46:11 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/06/26 19:46:12 by fgalan-r         ###   ########.fr       */
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
