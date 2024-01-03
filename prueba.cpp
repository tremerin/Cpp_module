#include <iostream>

int main (int agrc, char **argv)
{
    float num = std::stof(argv[1]);
    std::cout << num << std::endl;

    return (0);
}