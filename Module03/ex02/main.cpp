#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    FragTrap clap1("Frag1");
    clap1.info();
    clap1.attack("objetive");
    clap1.attack("objetive");
    clap1.beRepaired(3);
    clap1.info();
    clap1.setEnergyPoints(0);
    clap1.attack("objetive");
    clap1.takeDamage(2);
    clap1.beRepaired(3);
    clap1.info();
    clap1.highFivesGuys();
  
    return (0);
}