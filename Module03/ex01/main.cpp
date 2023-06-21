#include "ClapTrap.hpp"
#include "SkapTrap.hpp"

int main(void)
{
    SkapTrap clap1("Skap1");
    ClapTrap clap2("ct2");
    clap1.attack("pepe");
    clap1.attack("pepe");
    clap1.attack("pepe");
    clap1.attack("pepe");
    clap1.takeDamage(2);
    clap1.beRepaired(3);
    clap2.attack("ose");

    return (0);
}