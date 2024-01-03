/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 03:30:12 by fgalan-r          #+#    #+#             */
/*   Updated: 2024/01/03 01:13:06 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Intern constructor is called" << std::endl;
}

Intern::Intern(const Intern & src)
{
    std::cout << "Intern copy constructor is called" << std::endl;
    *this = src;
}

Intern::~Intern()
{
    std::cout << "Intern destructor is called" << std::endl;
}

Intern & Intern::operator=(const Intern & rhs)
{
    std::cout << "Intern asignation operator is called" << std::endl;
    (void)rhs;
    return (*this);
}

AForm *Intern::makeForm(std::string name, std::string target)
{
	std::string	forms[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	int	i = 0;

	while (i < 3 && forms[i].compare(name))
		i++;
	
	switch (i)
    {
		case 0:
			return new PresidentialPardonForm(target);
		case 1:
			return new RobotomyRequestForm(target);
		case 2:
			return new ShrubberyCreationForm(target);
		default:
			return (nullptr);
	}
}
