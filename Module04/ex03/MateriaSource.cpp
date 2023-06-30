/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 19:21:58 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/06/30 19:35:22 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
    std::cout << "MateriaSource constructor called" << std::endl;
    for (size_t i = 0; i < 4; i++)
        this->_materias[i] = NULL;
}

MateriaSource::~MateriaSource()
{
    std::cout << "MateriaSource destructor called" << std::endl;
    for (size_t i = 0; i < 4; i++)
        if (_materias[i])
            delete _materias[i];
}