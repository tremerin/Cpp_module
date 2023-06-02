/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 19:10:17 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/06/02 19:10:22 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace(std::string infile, std::string toFind, std::string replace) 
:_infile(infile), _toFind(toFind), _replace(replace)
{
    _outfile = _infile + ".replace";
    _openAndReplaceFile();
}

Replace::~Replace()
{

}

void Replace::_openAndReplaceFile(void)
{
    std::ifstream   ifs(_infile);
    if (ifs.is_open())
    {
        std::ofstream   ofs(_outfile);
        std::string     content;
        std::size_t     pos;
        std::size_t     len;

        std::getline(ifs, content, '\0');
        len = _toFind.length();
        pos = content.find(_toFind);

        while (pos >= 0 && pos < content.length())
        {
            content.erase(pos, len);
            content.insert(pos, _replace);
            pos = content.find(_toFind);
        }
        ofs << content;
        ifs.close();
        ofs.close();
    }
    else
        std::cerr << "file not found" << std::endl;
    
}
