/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 19:11:19 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/06/26 19:11:21 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FrapTrap " << this->getName() << " Default constructor called" << std::endl;
    this->setHitPoints(100);
    this->setEnergyPoints(100);
    this->setAttackDamage(30);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::attack(const std::string & target)
{
    if (this->getEnergyPoints() > 0)
    {
        std::cout << "FragTrap " << this->getName();
        std::cout << " attacks " << target << ", causing ";
        std::cout << this->getAttackDamage() << " points of damage!" << std::endl;
        this->setEnergyPoints(this->getEnergyPoints() -1);
    }
    else
    {
        std::cout << "FragTrap " << this->getName();
        std::cout << " need energy to attack" << std::endl;
    }
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "High five guys!" << std::endl;
}
