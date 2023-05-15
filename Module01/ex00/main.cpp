#include <iostream>
#include "Zombie.hpp"

int main(void)
{
    Zombie pepe("pepe");
    Zombie jose("jose");
    pepe.announce();
    pepe.announce();
    jose.announce();
    Zombie *zombiPtr = newZombie("paco");
    zombiPtr->announce();
    delete zombiPtr;
    randomChump("otro");
    return (0);
}