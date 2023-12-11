/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 03:30:12 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/12/11 19:09:35 by fgalan-r         ###   ########.fr       */
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
    if (!name.compare("shrubbery creation"))
    {
        std::cout << "Intern creates " << name << std::endl;
        return new ShrubberyCreationForm(target);
    }
    else if (!name.compare("robotomy request"))
    {
        std::cout << "Intern creates " << name << std::endl;
        return new RobotomyRequestForm(target);
    }
    else if (!name.compare("presidential pardon"))
    {
        std::cout << "Intern creates " << name << std::endl;
        return new PresidentialPardonForm(target);
    }
    else
    {
        std::cerr << "Invalid name: " << name << std::endl;
        return nullptr;
    }
}
