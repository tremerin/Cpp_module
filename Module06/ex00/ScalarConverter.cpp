/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 17:31:38 by fgalan-r          #+#    #+#             */
/*   Updated: 2024/01/01 20:45:19 by fgalan-r         ###   ########.fr       */
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

static int isPseudoDouble(const std::string str)
{
	if (str == "nan" || str == "inf" || str == "+inf" || str == "-inf")
		return (1);
	return (0);
}

static int isPseudoFloat(const std::string str)
{
	if (str == "nanf" || str == "inff" || str == "+inff" || str == "-inff")
		return (1);
	return (0);
}

void ScalarConverter::Convert(const std::string str)
{
	bool	typeChar      = isChar(str);
	bool	typeInt       = isInt(str);
	bool	typeFloat     = isFloat(str);
	bool	typeDouble    = isDouble(str);
	bool	literalFloat  = isPseudoFloat(str);
	bool	literalDouble = isPseudoDouble(str);

	if (typeChar)
		std::cout << "Is char" << std::endl;
	if (typeInt)
		std::cout << "Is int" << std::endl;
	if (typeFloat)
		std::cout << "Is float" << std::endl;
	if (typeDouble)
		std::cout << "Is double" << std::endl;
	if (literalFloat)
		std::cout << "Is pseudo float" << std::endl;
	if (literalDouble)
		std::cout << "Is pseudo double" << std::endl;
}
