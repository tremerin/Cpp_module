/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 19:42:32 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/06/02 19:42:34 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int main(void)
{
    Zombie pepe("pepe");
    Zombie jose("jose");
    pepe.announce();
    pepe.announce();
    jose.announce();
    Zombie *zombiPtr = newZombie("paco");
    zombiPtr->announce();
    delete zombiPtr;
    randomChump("otro");
    return (0);
}
