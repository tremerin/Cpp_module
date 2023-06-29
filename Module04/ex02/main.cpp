/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 19:45:46 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/06/29 20:54:14 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WorngAnimal.hpp"
#include "WorngCat.hpp"

int main(void)
{
    std::cout << "-------- test 1 ---------" << std::endl;
    const AAnimal *dog = new Dog();
    const AAnimal *cat = new Cat();
    //const AAnimal *animal = new AAnimal(); //Error por ser una calse abstracta
    std::cout << dog->getType() << " " << std::endl;
    std::cout << cat->getType() << " " << std::endl;
    dog->makeSound(); 
    cat->makeSound();
    delete dog;
    delete cat;

    return (0);
}
