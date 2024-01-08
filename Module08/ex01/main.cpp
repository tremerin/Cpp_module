/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 06:00:57 by fgalan-r          #+#    #+#             */
/*   Updated: 2024/01/08 19:54:00 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Span.hpp"
#include <ctime>
#include <cmath>

/* static void fillVector(int n, Span *span)
{
    srand(time(NULL));
    for (int i = 0; i < n; i++)
        span->addNumber(rand());
} */

int main(void)
{
    // test 1
    {
        std::cout << "+++++++ test 1 +++++++" << std::endl;
        try
        {
            int n = 10000;
            Span    mySpan(n);
            //fillVector(n, &mySpan);
            /* mySpan.addNumber(5);
            mySpan.addNumber(390);
            mySpan.addNumber(21);
            mySpan.addNumber(12);
            mySpan.addNumber(33);
            mySpan.addNumber(393); */

            std::cout << "shortest span: " << mySpan.shortestSpan() << std::endl;
            std::cout << "longest span: " << mySpan.longestSpan() << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    // test 2
    {
        std::cout << "+++++++ test 2 +++++++" << std::endl;
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
        /* $> ./ex01
        2
        14
        $> */
    }

    return (0);
}
