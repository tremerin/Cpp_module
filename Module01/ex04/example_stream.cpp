#include <iostream>
#include <fstream>
#include <string>

int main(void)
{
    std::ifstream   ifs("number");
    std::string dst;
    std::string dst2;
    ifs >> dst >> dst2 >> dst;
    if (dst2.compare("casa") == 0)
    {
        dst2 = "patata";
        std::cout << "debug\n";
    }
    std::cout << dst << " " << dst2 << "$" << std::endl;
    ifs.close();

    std::ofstream   ofs("test.out");
    ofs << "los de 42 no traducen los videos" << std::endl;
    ofs << "123\n";
    ofs << "456" << std::endl;
    ofs.close();

    return (0);
}
