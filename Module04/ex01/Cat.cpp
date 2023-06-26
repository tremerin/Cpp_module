#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << _type << " constructor called" << std::endl;
    this->_Brain = new Brain();
}

Cat::~Cat()
{
    std::cout << _type << " destructor called" << std::endl;
    delete this->_Brain;
}

void Cat::makeSound(void) const
{
    std::cout << "Miauu" << std::endl;
}