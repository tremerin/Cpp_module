#include "Replace.hpp"

int main(int argc, char **argv)
{
    if (argc == 4)
        Replace replace(argv[1], argv[2], argv[3]);
    else
        std::cerr << "arguments: " << argc << ", need 4" << std::endl;
    return (0);
}