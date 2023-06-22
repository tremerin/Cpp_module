#include "SkapTrap.hpp"

SkapTrap::SkapTrap(std::string name) : ClapTrap(name)
{
    std::cout << "SkapTrap " << this->getName() << " Default constructor called" << std::endl;
    this->setHitPoints(100);
    this->setEnergyPoints(50);
    this->setAttackDamage(20);
}

SkapTrap::~SkapTrap()
{
    std::cout << "SkapTrap destructor called" << std::endl;
}

void SkapTrap::attack(const std::string & target)
{
    if (this->getEnergyPoints() > 0)
    {
        std::cout << "SkapTrap " << this->getName(); 
        std::cout << " attacks " << target << ", causing ";
        std::cout << this->getAttackDamage() << " points of damage!" << std::endl;
        this->setEnergyPoints(this->getEnergyPoints() -1);
    }
    else
    {
        std::cout << "SkapTrap " << this->getName();
        std::cout << " need energy to attack" << std::endl; 
    }
}

void SkapTrap::guardGate(void)
{
    std::cout << "SkapTrap " << this->getName() << " is now in Gate keeper mode" << std::endl; 
}