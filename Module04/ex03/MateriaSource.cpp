/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 19:21:58 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/07/02 23:41:55 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"


MateriaSource::MateriaSource(void)
{
    std::cout << "MateriaSource constructor called" << std::endl;
    for (size_t i = 0; i < 4; i++)
        this->_materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource & src)
{
    std::cout << "Materiasource copy constructor called" << std::endl;
    *this = src;
}

MateriaSource & MateriaSource::operator=(MateriaSource const & src)
{
    if (this != & src)
    {
        for (int i = 0; i < 4; i++)
            _materias[i] = src._materias[i];
    }
    return *this;
}

MateriaSource::~MateriaSource()
{
    std::cout << "MateriaSource destructor called" << std::endl;
    for (size_t i = 0; i < 4; i++)
        if (_materias[i])
            delete _materias[i];
}

AMateria *MateriaSource::getMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
        if (_materias[i] && _materias[i]->getType() == type)
            return (_materias[i]);
    return NULL;
}

void    MateriaSource::learnMateria(AMateria *materia)
{
    for (int i = 0; i < 4; i++)
        if (_materias[i] == NULL)
        {
            _materias[i] = materia;
            std::cout << "MateriaSource slot " << i <<  ": " << materia->getType() << std::endl;
            return ;
        }
    std::cout << "There are no more slots available" << std::endl;
    delete materia;
}

AMateria    *MateriaSource::createMateria(std::string const & type) 
{
    for (int i = 0; i < 4; i++)
        if (_materias[i] && _materias[i]->getType() == type)
            return (_materias[i]->clone());
    return (NULL);
}