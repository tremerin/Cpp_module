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
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-picklespecial-ketchup burger. I really do!" << std::endl;
}
void Harl::_info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void Harl::_warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}
void Harl::_error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	t_func  	functions[] = { &Harl::_debug , &Harl::_info , &Harl::_warning , &Harl::_error };
	std::string	options[] =   { "DEBUG" , "INFO" , "WARNING" , "ERROR"};
	int 		option = 0;
	while (option < 4)
	{
		if (!level.compare(options[option]))
		{
			(this->*functions[option])();
			break ;
		}
		option++;
	}
	if (option == 4)
		std::cout << "invalid option" << std::endl;

}