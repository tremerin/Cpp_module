#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << _type << " constructor called" << std::endl;
}

Dog::~Dog()
{
    std::cout << _type << " destructor called" << std::endl;
}

void Dog::makeSound(void) const
{
    std::cout << "Wuaau" << std::endl;
}