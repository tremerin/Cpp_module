#include "ClapTrap.hpp"
#include "SkapTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    FragTrap clap1("Frag1");
    SkapTrap clap2("Skap1");
    clap1.info();
    clap2.info();

    clap1.attack("pepe");
    clap2.attack("pepe");
    clap1.attack("pepe");
    clap2.attack("pepe");
    clap1.takeDamage(2);
    clap1.beRepaired(3);
    clap1.highFivesGuys();

    clap1.info();
  
    return (0);
}