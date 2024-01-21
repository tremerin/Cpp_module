# include <iostream>
# include <fstream>
# include <algorithm>
# include <fcntl.h>
# include <cstring>
# include <map>


int valiedDate(std::string date)
{
    int year, month, day;
    try
    {
        year = stoi(date.substr(0,4));
        month = stoi(date.substr(5,6));
        day = stoi(date.substr(8,9));
    }
    catch(const std::exception& e)
    {
        //std::cerr << e.what() << '\n';
        //std::cerr << "invalid date" << std::endl;
        return (0);
    }
    int monthsDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (year % 4 == 0)
        monthsDays[1] = 29;
    if ((year < 2009 || year > 2022) || (month < 1 || month > 12) || (day < 1 || day > monthsDays[month -1]))
    {
        //std::cout << "invalid date" << std::endl;
        return (0);
    }
    return (1);
}    


int main(int argc, char **argv)
{
    std::map<std::string, float>    data;
    std::ifstream   infile(argv[1]); 

    if (infile.is_open())
    {
        std::cout << "archivo " << argv[1] << " abierto" << std::endl;
        std::string content;
        std::string key;
        std::string value;
        std::size_t pos;
        float       numValue;
        /* std::getline(infile, content, '\n');
        std::cout << "content: " << content << std::endl;
        std::getline(infile, content, '\n');
        std::cout << "content: " << content << std::endl; */
        while (getline(infile, content, '\n'))
        {
            std::cout << "content: " << content << std::endl;
            pos = content.find(",");
            key = content.substr(0, pos);
            value = content.substr(pos+1);
            std::cout << "key: " << key << std::endl;
            std::cout << "value: " << value << std::endl;
            try
            {
                numValue = std::stof(value);
            }
            catch(const std::exception& e)
            {
                //std::cerr << e.what() << '\n';
                numValue = -1;
            }
            
            std::cout << "numValue: " << numValue << std::endl;
            data.insert(std::pair<std::string, float>(key, numValue));
        }
        infile.close();
    }
    else
    {
        std::cout << "no existe el archivo" << std::endl;
    }
    std::cout << "map container" << std::endl;
    std::map<std::string, float>::const_iterator it;
    std::string date;
    for (it=data.begin(); it!=data.end(); ++it)
    {
        if (valiedDate(it->first))
        {
            std::cout << it->first << " => " << it->second << '\n';
            date = it->first;
        }
        else
        {
            std::cout << it->first << " invalid data" << std::endl;
        }
        //std::cout << date << std::endl;
    }
    it = data.find("2015-19-26");
    std::cout << it->second << std::endl;
    return (0);
}