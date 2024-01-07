/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 06:00:57 by fgalan-r          #+#    #+#             */
/*   Updated: 2024/01/07 18:35:51 by fgalan-r         ###   ########.fr       */
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

    return (0);
}
