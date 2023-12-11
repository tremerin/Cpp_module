/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 04:46:07 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/12/11 19:17:12 by fgalan-r         ###   ########.fr       */
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
    Bureaucrat burro("Ramon", 14);
    AForm *rrf1;
    AForm *rrf2;

    rrf1 = someRandonIntern.makeForm("shrubbery creation", "arbolito");
    burro.signForm(*rrf1);
    burro.executeForm(*rrf1);
    try
    {
        rrf2 = someRandonIntern.makeForm("shrubberyCreation", "arbolito");
        if (rrf2 == nullptr)
            throw Intern::NullPointer();

        burro.signForm(*rrf2);
    }
    catch (Intern::NullPointer & e)
    {
        std::cout << e.what() << std::endl;
    }
    delete rrf1;
    delete rrf2;
    return (0);
}
