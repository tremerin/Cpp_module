#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name)
{
    this->_name = name;
    this->ClapTrap::_name = name + "_clap_name";
    
    std::cout << "DiamondTrap " << this->getName() << " Default constructor called" << std::endl;

    FragTrap::_hitPoints = 100;
    ScavTrap::_energyPoints = 50;
    FragTrap::_attackDamage = 30; 
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap " << this->_name << " destructor called" << std::endl;
}

void    DiamondTrap::whoAmI( void ) {
    std::cout << "DiamondTrap name: " << this->_name << std::endl;
    std::cout << "ClapTrap name: " << ClapTrap::_name << std::endl;
}