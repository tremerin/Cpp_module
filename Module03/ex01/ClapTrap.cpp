/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 19:05:21 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/06/26 19:05:23 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
: _name("Void"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "Void constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
: _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap " << this->getName() << " Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
    std::cout << "ClapTrap " << this->getName() << " copy constructor called" << std::endl;
    *this = src;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & src)
{
    this->_name = src._name;
    this->_hitPoints = src._hitPoints;
    this->_energyPoints = src._energyPoints;
    this->_attackDamage = src._attackDamage;
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called" << std::endl;
}

std::string ClapTrap::getName(void) const
{
    return (this->_name);
}

void ClapTrap::setName(std::string const name)
{
    this->_name = name;
}

int ClapTrap::getHitPoints(void) const
{
    return (this->_hitPoints);
}

void ClapTrap::setHitPoints(int const hitpoints)
{
    this->_hitPoints = hitpoints;
}

int ClapTrap::getEnergyPoints(void) const
{
    return (this->_energyPoints);
}

void ClapTrap::setEnergyPoints(int const energy)
{
    this->_energyPoints = energy;
}

int ClapTrap::getAttackDamage(void) const
{
    return (this->_attackDamage);
}

void ClapTrap::setAttackDamage(int const attack)
{
    this->_attackDamage = attack;
}

void ClapTrap::attack(const std::string & target)
{
    if (this->getEnergyPoints() > 0)
    {
        std::cout << "ClapTrap " << this->getName();
        std::cout << " attacks " << target << ", causing ";
        std::cout << this->getAttackDamage() << " points of damage!" << std::endl;
        this->_energyPoints--;
    }
    else
    {
        std::cout << "ClapTrap " << this->getName();
        std::cout << " need energy to attack" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << this->getName();
    std::cout << " take " << amount << " damage" << std::endl;
    this->setHitPoints(this->_hitPoints -= amount);
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->getEnergyPoints() > 0)
    {
        std::cout << "ClapTrap " << this->getName();
        std::cout << " repair " << amount << " damage." << std::endl;
        this->_energyPoints--;
        this->setHitPoints(this->_hitPoints += amount);
    }
    else
    {
        std::cout << "ClapTrap " << this->getName();
        std::cout << " need energy to repair" << std::endl;
    }
}

void ClapTrap::info(void)
{
    std::cout << "-------------INFO-----------------" << std::endl;
    std::cout << "Name:          " << this->getName() << std::endl;
    std::cout << "Attack points: " << this->getAttackDamage() << std::endl;
    std::cout << "Hit points:    " << this->getHitPoints() << std::endl;
    std::cout << "Energy points: " << this->getEnergyPoints() << std::endl;
    std::cout << "----------------------------------" << std::endl;

}
