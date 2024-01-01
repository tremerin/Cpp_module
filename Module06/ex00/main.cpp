/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 18:18:00 by fgalan-r          #+#    #+#             */
/*   Updated: 2024/01/01 20:45:16 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{

	if (argc == 2)
	{
		ScalarConverter::Convert(argv[1]);
		/* float f = 4;
		double d = 4;
		std::cout << f << std::endl;
		std::cout << d << std::endl; */
	}
	return (0);
}
