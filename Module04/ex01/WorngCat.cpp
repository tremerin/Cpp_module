#include "WorngCat.hpp"

WorngCat::WorngCat() : WorngAnimal("Cat")
{
    std::cout << _type << " constructor called" << std::endl;
}

WorngCat::~WorngCat()
{
    std::cout << _type << " destructor called" << std::endl;
}

void WorngCat::makeSound(void) const
{
    std::cout << "Miauu" << std::endl;
}