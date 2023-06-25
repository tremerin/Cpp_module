#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << _type << " constructor called" << std::endl;
}

Cat::~Cat()
{
    std::cout << _type << " destructor called" << std::endl;
}

void Cat::makeSound(void) const
{
    std::cout << "Miauu" << std::endl;
}