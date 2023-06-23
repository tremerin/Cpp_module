#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap clap1("ct1");
    clap1.info();
    clap1.attack("objetive");
    clap1.attack("objetive");
    clap1.info();
    clap1.setEnergyPoints(0);
    clap1.attack("objetive");
    clap1.takeDamage(2);
    clap1.beRepaired(3);
    clap1.info();
    return (0);
}