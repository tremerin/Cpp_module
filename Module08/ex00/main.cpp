/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 04:02:47 by fgalan-r          #+#    #+#             */
/*   Updated: 2024/01/06 04:12:23 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
    std::list<int>   l;
    l.push_back(1);
    l.push_back(3);
    l.push_back(2);
    l.push_back(33);
    try
    {
        int res = easyfind(l, 22);
        std::cout << res << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::vector<int>    v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(2);
    v.push_back(33);
    v.push_back(4);
    v.push_back(24);

    try
    {
        int res = easyfind(v, 3);
        std::cout << res << std::endl;
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}