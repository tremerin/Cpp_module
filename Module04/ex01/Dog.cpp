#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << _type << " constructor called" << std::endl;
    this->_Brain = new Brain();
}

Dog::~Dog()
{
    std::cout << _type << " destructor called" << std::endl;
    delete this->_Brain;
}

void Dog::makeSound(void) const
{
    std::cout << "Wuaau" << std::endl;
}