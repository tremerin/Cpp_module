/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 00:03:27 by fgalan-r          #+#    #+#             */
/*   Updated: 2024/01/25 14:21:49 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PmergeMe.hpp"

int main(int argc, char **argv)
{
    if (argc > 2) 
    {
		clock_t time;
		clock_t time2;
		try 
        {
			std::cout << "----------- Vector -----------" << std::endl;
			time = clock();
			PmergeMe::vectorPmergeMe(argc, argv);
			time = clock() - time;
			std::cout << "----------- Deque -----------" << std::endl;
			time2 = clock();
			PmergeMe::dequePmergeMe(argc, argv);
			time2 = clock() - time2;
			std::cout << "\nTime to process a range of " << argc -1 << " elements with std::vector: " 
			<<  time / (double)CLOCKS_PER_SEC *1e6 << " us" << std::endl;
			std::cout << "Time to process a range of " << argc -1 << " elements with std::deque: " 
			<<  time2 / (double)CLOCKS_PER_SEC *1e6 << " us" << std::endl;
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