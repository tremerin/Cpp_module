#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap clapVoid;
    ClapTrap clap1("ct1");
    ClapTrap clap2("ct2");
    clap1.attack("pepe");
    clap1.attack("pepe");
    clap1.attack("pepe");
    clap1.attack("pepe");
    clap1.takeDamage(2);
    clap1.beRepaired(3);
    clap2.attack("ose");
    ClapTrap clap3(clap1);
    clap3.attack("jesuu");
    return (0);
}