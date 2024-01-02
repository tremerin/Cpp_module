/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 17:31:38 by fgalan-r          #+#    #+#             */
/*   Updated: 2024/01/02 04:58:23 by fgalan-r         ###   ########.fr       */
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

// +++++++++++++++++++++++++++ get type ++++++++++++++++++++++++++++ //

static int isChar(const std::string str)
{
	if (str.length() == 1) 
		if (std::isalpha(str[0]) && std::isprint(str[0]))
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
	if (doot == false)
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

/* static void debugType(const std::string str)
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
} */

enum Type
{
	typeChar,
	typeInt,
	typeFloat,
	typeDouble,
	typePseudoFloat,
	typePseudoDouble,
	noType
};

static Type getType(const std::string str)
{
	if (isChar(str))
		return (typeChar);
	else if (isInt(str))
		return (typeInt);
	else if (isFloat(str))
		return (typeFloat);
	else if (isDouble(str))
		return (typeDouble);
	else if (isPseudoFloat(str)) 
		return (typePseudoFloat);
	else if (isPseudoDouble(str))
		return (typePseudoDouble);
	return (noType);
}

// +++++++++++++++++++++++++++ convert type ++++++++++++++++++++++++++++ //

static void charConversion(char c)
{
	std::cout << "char: '" << c << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}

static void intConversion(const std::string str)
{
	int num = std::stoi(str);
	if (num >= 32 && num <= 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(num) << "'" << std::endl;
	std::cout << "int: " << num << std::endl;
	std::cout << "float: " << static_cast<float>(num) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(num) << ".0" << std::endl;
}

static void floatConversion(const std::string str)
{
	(void)str;
}

static void doubleConversion(const std::string str)
{
	(void)str;
}

static void pseudoFloatConversion(const std::string str)
{
	(void)str;
}

static void pseudoDoubleConversion(const std::string str)
{
	(void)str;
}

void	ScalarConverter::convert(const std::string str)
{
	//debugType(str);
	switch (getType(str))
	{
		case typeChar:
			charConversion(str[0]);
			break;
		case typeInt:
			intConversion(str);
			break;
		case typeFloat:
			floatConversion(str);
			break;
		case typeDouble:
			doubleConversion(str);
			break;
		case typePseudoFloat:
			pseudoFloatConversion(str);
			break;
		case typePseudoDouble:
			pseudoDoubleConversion(str);
			break;
		default:
			std::cout << "Error: invalid input" << std::endl;
			break;
	}
}