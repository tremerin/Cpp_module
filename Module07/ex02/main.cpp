/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 19:20:57 by fgalan-r          #+#    #+#             */
/*   Updated: 2024/01/19 18:49:24 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <cmath>
#include "Array.hpp"

#define MAX_VAL 50

int main(void)
{
	std::cout << "-------- Test 1 ---------" << std::endl;
	{
		Array<int> numbers(MAX_VAL);
        int* mirror = new int[MAX_VAL];
        srand(time(NULL));
        for (int i = 0; i < MAX_VAL; i++)
        {
            const int value = rand();
            numbers[i] = value;
            mirror[i] = value;
        }
        //SCOPE
        {
            Array<int> tmp = numbers;
            Array<int> test(tmp);
        }

        for (int i = 0; i < MAX_VAL; i++)
        {
            std::cout << "mirror: " << mirror[i] << " numbers: " << numbers[i] << std::endl;
            if (mirror[i] != numbers[i])
            {
                std::cerr << "didn't save the same value!!" << std::endl;
                return 1;
            }
        }
        try
        {
            numbers[-2] = 0;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        try
        {
            numbers[MAX_VAL] = 0;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }

        for (int i = 0; i < MAX_VAL; i++)
        {
            numbers[i] = rand();
        }
        delete [] mirror;//
	}
	std::cout << "-------- Test 2 ---------" << std::endl;
	{
        Array<char> characters(10);
        characters[0] = 'H';
        characters[1] = 'O';
        characters[2] = 'L';
        characters[3] = 'A';
        std::cout << characters[0] << std::endl;
        std::cout << characters[1] << std::endl;
        std::cout << characters[2] << std::endl;
        std::cout << characters[3] << std::endl;
        try
        {
            std::cout << characters[-2] << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
	}
    std::cout << "-------- Test 3 ---------" << std::endl;
	{
        Array<int> nums;
        Array<int> nums2(0);
    }
    return 0;
}
