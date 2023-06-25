#include "WorngAnimal.hpp"

WorngAnimal::WorngAnimal() : _type("Animal")
{
    std::cout << _type << " constructor called" << std::endl;
}

WorngAnimal::WorngAnimal(std::string type) : _type(type)
{
    std::cout << "WorngAnimal " << _type << " constructor called" << std::endl;
}

WorngAnimal::WorngAnimal(const WorngAnimal & src)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = src;
}

WorngAnimal::~WorngAnimal()
{
    std::cout << "Animal destructor called" << std::endl;
}

WorngAnimal & WorngAnimal::operator=(WorngAnimal const & src)
{
    if ( this != & src )
        this->_type = src._type;
    return (*this);
}

std::string WorngAnimal::getType(void) const
{
    return (this->_type);
}

void WorngAnimal::setType(std::string const type)
{
    this->_type = type;
}

void WorngAnimal::makeSound(void) const
{
    std::cout << "Animal make sound" << std::endl;
}

