#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->_name = name;
    std::cout << _name << " is created" << std::endl; 
}

Zombie::~Zombie()
{
    std::cout << _name << " is destroyed" << std::endl; 
}

void Zombie::announce(void)
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}