/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 19:00:46 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/06/02 19:00:49 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{

}

Harl::~Harl()
{

}


void Harl::_debug(void)
{
    std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-picklespecial-ketchup burger. I really do!" << std::endl;
    std::cout << std::endl;
}
void Harl::_info(void)
{
    std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
    std::cout << std::endl;
}
void Harl::_warning(void)
{
    std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
    std::cout << std::endl;
}
void Harl::_error(void)
{
    std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
    std::cout << std::endl;
}

void Harl::complain(std::string level)
{
    std::string options[] = { "DEBUG" , "INFO", "WARNING", "ERROR" };
    int option = 0;
    while (option < 4)
    {
        if (!level.compare(options[option]))
            break ;
        option++;
    }
    switch (option)
    {
        case 0: 
            this->_debug();
            this->_info();
            this->_warning();
            this->_error();
            break ;
        case 1: 
            this->_info();
            this->_warning();
            this->_error();
            break ;
        case 2: 
            this->_warning();
            this->_error();
            break ;
        case 3: 
            this->_error(); 
            break ;
        
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}
