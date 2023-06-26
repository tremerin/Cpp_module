/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 19:05:33 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/06/26 19:05:34 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap clap1("Skap1");
    clap1.info();
    clap1.attack("objetive");
    clap1.attack("objetive");
    clap1.attack("objetive");
    clap1.info();
    clap1.setEnergyPoints(0);
    clap1.attack("objetive");
    clap1.takeDamage(2);
    clap1.beRepaired(3);
    clap1.info();
    clap1.guardGate();

    return (0);
}
