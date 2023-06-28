/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 19:45:46 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/06/28 00:27:22 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WorngAnimal.hpp"
#include "WorngCat.hpp"
//#include "Brain.hpp"

int main(void)
{
const Animal* dog = new Dog();
const Animal* cat = new Cat();
//const Cat* cat = new Cat();
std::cout << dog->getType() << " " << std::endl;
std::cout << cat->getType() << " " << std::endl;
dog->makeSound(); 
cat->makeSound();

Cat cato(); 


delete dog;
delete cat;

}
