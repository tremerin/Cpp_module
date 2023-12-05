/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 04:46:07 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/12/05 04:53:00 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
    Intern someRandonIntern;
    Bureaucrat burro("Ramon", 33);
    AForm *rrf1;
    AForm *rrf2;

    rrf1 = someRandonIntern.makeForm("shrubbery creation", "arbolito");
    rrf2 = someRandonIntern.makeForm("shrubberyCreation", "arbolito");
    burro.signForm(*rrf1);
    burro.signForm(*rrf2);
    burro.executeForm(*rrf1);
    return (0);
}