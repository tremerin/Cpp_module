/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 04:26:59 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/11/21 04:59:26 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
    std::cout << "Bureaucrat is here" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const name, int grade) : 
_name(name),
_grade(grade)
{
    std::cout << "Bureaucrat "  << _name << " is here" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat is dead" << std::endl;
}