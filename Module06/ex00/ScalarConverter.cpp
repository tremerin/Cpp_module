/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 17:31:38 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/12/13 19:35:40 by fgalan-r         ###   ########.fr       */
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

void ScalarConverter::Convert(const std::string)
{
	std::cout << "hola" << std::endl;
}
