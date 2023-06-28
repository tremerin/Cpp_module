/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 19:45:46 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/06/28 22:18:12 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WorngAnimal.hpp"
#include "WorngCat.hpp"

int main(void)
{
    std::cout << "-------- test 1 ---------" << std::endl;
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();
    std::cout << dog->getType() << " " << std::endl;
    std::cout << cat->getType() << " " << std::endl;
    dog->makeSound(); 
    cat->makeSound();
    delete dog;
    delete cat;

    std::cout << "-------- test 2 ---------" << std::endl;
    Cat cat1;
    cat1.newIdea(0, "tengo hambre");
    cat1.newIdea(1, "voy a dormir");
    Cat cat2 = cat1;
    cat2.printfIdea(0); 
    cat2.printfIdea(1); 
    cat2.makeSound();
    return (0);
}
