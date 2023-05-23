#include <iostream>
#include <fstream>

int main(void)
{
    std::string     content;
    std::ifstream   ifs("infile");
    std::ofstream   ofs("outfile");

    std::getline(ifs, content, '\0');
    ofs << content;
    ifs.close();
    ofs.close();
    return (0);
}