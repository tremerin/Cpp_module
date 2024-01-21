/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 15:07:15 by fgalan-r          #+#    #+#             */
/*   Updated: 2024/01/21 18:08:11 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"
#include <iostream>
#include <string>

int main(void)
{
    const int numbers[3] = {1, 2, 3};
    float numbers2[5] = {1.1, 2.2 , 3.3, 4.4};
    const std::string strings[2] = {"hola", "mundo"};
    std::string strings2[3] = {"hola", "mundo", "adios mundo cruel"};

    iter(numbers, 3, funt);
    iter(numbers, 5, funt);
    iter(numbers2, 5, funt);
    iter(strings, 2, funt);
    iter(strings2, 3, funt);

    /* iter(numbers, 3, funt<const int>);
    iter(strings, 2, funt<const std::string>); */

    return (0);
}
