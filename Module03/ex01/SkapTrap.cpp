#include "SkapTrap.hpp"

SkapTrap::SkapTrap(std::string name) : ClapTrap(name)
{
    std::cout << "SkapTrap " << this->getName() << " Default constructor called" << std::endl;
    this->setAttackDamage(10);
}

SkapTrap::~SkapTrap()
{
    std::cout << "SkapTrap destructor called" << std::endl;
}