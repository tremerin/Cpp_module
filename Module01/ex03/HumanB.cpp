/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 19:38:41 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/06/02 19:38:43 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
    this->_weapon = NULL;
    std::cout << "HumanB " << _name << " created" << std::endl;
}

HumanB::~HumanB()
{
    std::cout << "HumanB destroyed" << std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
    this->_weapon = &weapon;
}

void HumanB::attack(void)
{
    std::cout << this->_name << " attacks with their ";
    std::cout << this->_weapon->getType() << std::endl;
}
