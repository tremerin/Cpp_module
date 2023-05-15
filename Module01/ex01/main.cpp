#include <iostream>
#include "Zombie.hpp"

int main(void)
{
    int N = 10;
    int i = 0;
    Zombie *horde = zombieHorde(N, "paco");
    while (i < N)
    {
        horde[i].announce();
        i++;
    }
    delete [] horde;
    return (0);
}