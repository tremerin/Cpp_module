/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 14:28:57 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/07/06 04:46:11 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include <iostream>

int main(void)
{
	{
		std::cout << "---------// Subject test //----------" << std::endl;

		IMateriaSource *src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter *me = new Character("me");
		AMateria *tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		delete bob;
		delete me;
		delete src;
	}

	{
		std::cout << "---------// Subject test 2 //----------" << std::endl;

		IMateriaSource *src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter *me = new Character("me");
		AMateria *tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");
		std::cout << "--------// unequip //---------" << std::endl;
		me->unequip(0);
		me->unequip(0);
		me->unequip(5);
		std::cout << "--------// use materias //---------" << std::endl;
		me->use(0, *bob);
		me->use(1, *bob);
		std::cout << "--------// equip again //---------" << std::endl;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		me->use(0, *bob);
		delete bob;
		delete me;
		delete src;
	}

	{
		std::cout << "---------// Test 2 //----------" << std::endl;

		IMateriaSource *src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		src->learnMateria(new Cure());
		std::cout << "---------// create materias //-------- " << std::endl;
		AMateria *tmp;
		tmp = src->createMateria("ice");
		delete tmp;
		tmp = src->createMateria("ice");
		delete tmp;
		tmp = src->createMateria("hielo");
		delete tmp;
		std::cout << "---------// src destructor //-------- " << std::endl;
		delete src;

	}
	return (0);
}
