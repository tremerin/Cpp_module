/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 19:40:58 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/06/30 12:37:21 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WorngAnimal.hpp"
#include "WorngCat.hpp"

int main(void)
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound();
j->makeSound();
meta->makeSound();
delete i;
delete j;
delete meta;
std::cout << "--------" << std::endl;

const WorngAnimal *animal = new WorngAnimal();
const WorngAnimal *cat = new WorngCat();
std::cout << animal->getType() << " " << std::endl;
std::cout << cat->getType() << " " << std::endl;
animal->makeSound();
cat->makeSound();
delete animal;
delete cat;
return 0;
}
