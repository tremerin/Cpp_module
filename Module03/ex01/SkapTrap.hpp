#ifndef SKAPTRAP_H
# define SKAPTRAP_H

# include "ClapTrap.hpp"
# include <iostream>

class SkapTrap : public ClapTrap    
{
private:
    SkapTrap();

public:
    SkapTrap(std::string name);
    ~SkapTrap();
};

#endif