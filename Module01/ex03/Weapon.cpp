#include "Weapon.hpp"

Weapon::Weapon(std::string type) :_type(type)
{
    std::cout << "weapon created" << std::endl;
}

Weapon::~Weapon()
{
    std::cout << "weapon destroyed" << std::endl;
}

std::string const Weapon::getType(void)
{
    return (this->_type);
}

void Weapon::setType(std::string type)
{
    this->_type = type;
}