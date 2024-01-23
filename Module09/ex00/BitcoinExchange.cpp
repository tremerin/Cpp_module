/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 02:04:59 by fgalan-r          #+#    #+#             */
/*   Updated: 2024/01/23 15:12:34 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void)
{
    std::cout << "BitcoinExchange constructor is called" << std::endl;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange & src)
{
    *this = src;
    std::cout << "BitcoinExchange copy constructor is called" << std::endl;
}

BitcoinExchange::~BitcoinExchange()
{
    std::cout << "BitcoinExchange destructor is called" << std::endl;
}

BitcoinExchange & BitcoinExchange::operator=(const BitcoinExchange & src)
{
    (void)src;
	return (*this);
    std::cout << "BitcoinExchange asignation operator is called" << std::endl;
}

static bool validDate(std::string date)
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
        return (false);
    }
    int monthsDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (year % 4 == 0)
        monthsDays[1] = 29;
    if ((year < 2009 || year > 2022) || (month < 1 || month > 12) || (day < 1 || day > monthsDays[month -1]))
    {
        //std::cout << "invalid date" << std::endl;
        return (false);
    }
    return (true);
}

static bool validValue(std::string value)
{
    try
    {
        float num = stof(value);
        if (num < 0 || num > 1000)
            return (false);
    }
    catch(const std::exception& e)
    {
        //std::cerr << e.what() << '\n';
        return (false);
    }
    return (true);
}

static std::string previousDate(std::string date, std::map<std::string, float> data)
{
    std::map<std::string, float>::iterator  it;
    std::string previous;
    for (it = data.begin(); it != data.end(); ++it)
    {
        if (date > it->first)
            previous = it->first;
    }
    return (previous);    
}

static std::map<std::string, float> loadDataBase(const std::string file)
{
    std::map<std::string, float> data;
    std::ifstream   infile(file);
    std::string     content;
    std::string     key;
    std::string     value;

    if (infile.is_open())
    {
        while (getline(infile, content, '\n'))
        {
            key = content.substr(0, content.find(","));
            value = content.substr(content.find(",") + 1);
            try
            {
                data.insert(std::pair<std::string, float>(key, stof(value)));
            }
            catch(const std::exception& e)
            {
                //std::cerr << e.what() << '\n';
                std::cout << "invalid date: " << key << " -> " << value << std::endl;
            }
        }
    }
    else
    {
        std::cerr << file << " could not be opened" << std::endl;
        exit (1);
    }
    return (data);
} 

void BitcoinExchange::bitcoinExchange(std::string file)
{
    std::map<std::string, float>            data = loadDataBase("data.csv");
    std::map<std::string, float>::iterator  it;
    std::ifstream   infile(file);
    std::string     content;
    std::string     date;
    std::string     value;

    if (infile.is_open())
    {
        getline(infile, content, '\n');
        while (getline(infile, content, '\n'))
        {
            date = content.substr(0, content.find(" | "));
            value = content.substr(content.find(" | ") + 3);            
            if (validDate(date) && validValue(value))
            {
                it = data.find(previousDate(date, data));
                std::cout << date << " => " << value << " = " << it->second * stof(value) << std::endl;
            }
            else if (validDate(date) == false)
                std::cout << "Error: bat input => " << date << std::endl;
            else if (validValue(value) == false)
                std::cout << "Error: bat number => " << value << std::endl;
        }
    }
    else
    {
        std::cerr << file << " could not be opened" << std::endl;
        exit (1);
    }

    // values on map
    /* for (it=data.begin(); it != data.end(); ++it)
    {
        std::cout << it->first << " -> " << it->second << std::endl;
    } */
}