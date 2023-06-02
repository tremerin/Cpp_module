/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 19:40:57 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/06/02 19:41:00 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int main(void)
{
    int N = 10;
    int i = 0;
    Zombie *horde = zombieHorde(N, "paco");
    while (i < N)
    {
        horde[i].announce();
        i++;
    }
    delete [] horde;
    return (0);
}
