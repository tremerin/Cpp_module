/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:37:54 by fgalan-r          #+#    #+#             */
/*   Updated: 2024/01/25 16:39:07 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RPN.hpp"

int	main(int argc, char **argv)
{
	(void)argv;
	if (argc != 2)
		std::cout << "usage: ./RPN [inverted polish mathematical expression]" << std::endl;
	else
    {
		try
        {
			std::cout << RPN::calculate(argv[1]) << std::endl;
		}
        catch (std::exception &e)
        {
			std::cerr << "Error" << std::endl;
		}
	}
	return (0);
}