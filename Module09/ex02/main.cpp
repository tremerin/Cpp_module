/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 00:03:27 by fgalan-r          #+#    #+#             */
/*   Updated: 2024/01/25 01:51:59 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PmergeMe.hpp"

int main(int argc, char **argv)
{
    if (argc > 2) 
    {
		try 
        {
			std::cout << "----------- Vector -----------" << std::endl;
			PmergeMe::vectorPmergeMe(argc, argv);
			std::cout << "----------- Deque -----------" << std::endl;
			PmergeMe::dequePmergeMe(argc, argv);
		}
        catch(std::exception &e) 
        {
			std::cerr << e.what() << std::endl;
		}
	}
	else
		std::cout << "Insert at least 2 numbers to start the program" << std::endl;

    return (0);
}