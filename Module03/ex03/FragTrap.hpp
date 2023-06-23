#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class FragTrap : virtual public ClapTrap
{
private:
    FragTrap();

public:
    FragTrap(std::string name);
    ~FragTrap();

    void attack(const std::string & target);
    void highFivesGuys(void);

};

#endif