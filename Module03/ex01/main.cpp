#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap clap1("Skap1");
    clap1.info();
    clap1.attack("objetive");
    clap1.attack("objetive");
    clap1.attack("objetive");
    clap1.info();
    clap1.setEnergyPoints(0);
    clap1.attack("objetive");
    clap1.takeDamage(2);
    clap1.beRepaired(3);
    clap1.info();
    clap1.guardGate();

    return (0);
}