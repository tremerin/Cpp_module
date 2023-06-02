/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 19:42:05 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/06/02 19:42:08 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *horde = new Zombie[N];
    int i = 0;
    while (i < N)
    {
        horde[i].setName(name);
        std::cout << "Zombie " << i << " created" << std::endl;
        i++;
    }

    return (horde);
}
