#include "ClapTrap.hpp"
#include "SkapTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
    DiamondTrap clap1("Diamond1");
    clap1.info();
    clap1.whoAmI();

    clap1.attack("objetive");
    clap1.attack("objetive");
    clap1.takeDamage(2);
    clap1.beRepaired(3);
    clap1.info();
    clap1.setEnergyPoints(0);
    clap1.attack("objetive");
    clap1.info();
  
    return (0);
}