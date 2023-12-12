/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 17:31:38 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/12/12 18:17:30 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	std::cout << "Constructor is called" << std::endl;
}

ScalarConverter::~ScalarConverter()
{
	std::cout << "Destructor is called" << std::endl;
}

void ScalarConverter::Convert(const std::string)
{
	std::cout << "hola" << std::endl;
}
