/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 15:07:15 by fgalan-r          #+#    #+#             */
/*   Updated: 2024/01/19 18:39:31 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"
#include <iostream>
#include <string>

int main(void)
{
    const int numbers[3] = {1, 2, 3};
    const std::string str[2] = {"hola", "mundo"};

    iter(numbers, 3, funt<const int>);
    iter(str, 2, funt<const std::string>);

    return (0);
}
