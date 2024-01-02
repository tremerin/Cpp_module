/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 18:18:00 by fgalan-r          #+#    #+#             */
/*   Updated: 2024/01/02 04:08:29 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{

	if (argc == 2)
		ScalarConverter::convert(argv[1]);
	else
		std::cout << "Usage: ./Converter + argument" << std::endl;
	return (0);
}
