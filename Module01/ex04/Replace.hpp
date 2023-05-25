#ifndef REPLACE_H
# define REPLACE_H

# include <iostream>
# include <fstream>

class Replace
{
private:
    std::string _infile;
    std::string _outfile;
    std::string _content;
    std::string _toFind;
    std::string _replace;

    void _openAndReplaceFile(void);
public:
    Replace(std::string infile , std::string toFind, std::string replace);
    ~Replace();
};

#endif