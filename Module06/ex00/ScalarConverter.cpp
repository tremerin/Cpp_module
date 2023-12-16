/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 17:31:38 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/12/16 20:50:01 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	std::cout << "Constructor is called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter & src)
{
	(void)src;
}

ScalarConverter::~ScalarConverter()
{
	std::cout << "Destructor is called" << std::endl;
}

ScalarConverter & ScalarConverter::operator=(const ScalarConverter & rhs)
{
	(void)rhs;
	return *this;
}

static int isChar(const std::string str)
{
	//std::cout << str.length() << std::endl;
	//std::cout << std::isalnum(str[0]) << std::endl;
	//std::cout << std::isprint(str[0]) << std::endl;
	if (str.length() == 1) 
		if (std::isalnum(str[0]) && std::isprint(str[0]))
			return (1);
	return (0);
}

static int isInt(const std::string str)
{
	int len = str.length();
	if (len > 1)
	{
		len--;
		while (len > 0)
		{
			if (!std::isdigit(str[len]))
				return (0);
			len--;
		}
		if (!std::isdigit(str[0]) && str[0] != '-' && str[0] != '+')
			return (0);
	}
	else
		if (!std::isdigit(str[0]))
			return (0);
	return (1);
}

static int isFloat(const std::string str)
{
	bool	doot = false;
	int		len  = str.length();
	len--;
	if (str[len] != 'f')
		return (0);
	if (len > 1)
	{
		len--;
		while (len > 0)
		{
			if (str[len] == '.' && doot == false)
				doot = true;
			else if (str[len] == '.' && doot == true)
				return (0);
			else if (!std::isdigit(str[len]))
				return (0);
			len--;
		}
		if (!std::isdigit(str[0]) && str[0] != '-' && str[0] != '+')
			return (0);
	}
	else
		if (!std::isdigit(str[0]))
			return (0);
	return (1);
}

static int isDouble(const std::string str)
{
	int		len  = str.length();
	bool	doot = false;
	if (len > 1)
	{
		len--;
		while (len > 0)
		{
			if (str[len] == '.' && doot == false)
				doot = true;
			else if (str[len] == '.' && doot == true)
				return (0);
			else if (!std::isdigit(str[len]))
				return (0);
			len--;
		}
		if (!std::isdigit(str[0]) && str[0] != '-' && str[0] != '+')
			return (0);
	}
	else
		if (!std::isdigit(str[0]))
			return (0);
	return (1);
}

void ScalarConverter::Convert(const std::string str)
{
	bool	typeChar   = false;
	bool	typeInt    = false;
	bool	typeFloat  = false;
	bool	typeDouble = false;

	typeChar = isChar(str);
	if (typeChar)
		std::cout << "Is char" << std::endl;
	typeInt = isInt(str);
	if (typeInt)
		std::cout << "Is int" << std::endl;
	typeFloat = isFloat(str);
	if (typeFloat)
		std::cout << "Is float" << std::endl;
	typeDouble = isDouble(str);
	if (typeDouble)
		std::cout << "Is double" << std::endl;
	//else
	//	std::cout << "No type" << std::endl;
}
