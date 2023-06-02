/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 19:38:09 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/06/02 19:38:13 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
    //this->_name = name;
    //this->_weapon = weapon; //error por no estar inicializada
    std::cout << "HumanA " << _name << " created" << std::endl;
}

HumanA::~HumanA()
{
    std::cout << "HumanA destroyed" << std::endl;
}

void HumanA::attack(void)
{
    std::cout << this->_name << " attacks with their ";
    std::cout << this->_weapon.getType() << std::endl;
}
