#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClapTrap.hpp"
# include <iostream>

class ScavTrap : virtual public ClapTrap    
{
private:
    ScavTrap();

public:
    ScavTrap(std::string name);
    ~ScavTrap();

    void attack(const std::string& target);
    void guardGate(void);
};

#endif