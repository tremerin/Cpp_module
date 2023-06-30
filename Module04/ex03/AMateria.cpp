/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 17:49:40 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/06/30 18:41:06 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : _type("no type")
{
    std::cout << "AMateria " << _type << " constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type) : _type(type)
{
    std::cout << "AMateria " << _type << " constructor called" << std::endl;
}

AMateria::~AMateria()
{
    std::cout << "AMateria " << _type << " constructor called" << std::endl;
}

