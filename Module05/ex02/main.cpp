/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 04:46:07 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/12/03 21:54:58 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
    {
        //Test 1
        try
        {
            Bureaucrat bureaucrat1("Burocrata 1",14);
            Bureaucrat bureaucrat2("Burocrata 2",21);
            //AForm form1("Formulario 1", 20 , 5);
            AForm *form2 = new ShrubberyCreationForm("target");
            ShrubberyCreationForm form("Shubbery");
            ShrubberyCreationForm *form3 = new ShrubberyCreationForm("forma3");
            //AForm *form3 = new ShrubberyCreationForm("target", 2);

            bureaucrat2.signForm(form);
            bureaucrat2.signForm(*form2);
            bureaucrat2.signForm(*form3);


            std::cout << *form2 << std::endl;
            std::cout << *form3 << std::endl;
            std::cout << form << std::endl;
            //std::cout << *form3 << std::endl;
            form2->execute(bureaucrat1);
        }
        catch (std::exception & e)
        {
            std::cout << e.what() << std::endl;
        }
        std::cout << "----- test 1 end -----" << std::endl;

    }
    // Test 2
    {
        Bureaucrat bureaucrat1("Burocrata 1",14);
        RobotomyRequestForm form("Pepe");
        bureaucrat1.signForm(form);
        std::cout << form << std::endl;
        form.execute(bureaucrat1);
        std::cout << "----- test 2 end -----" << std::endl;
    }
    return (0);
}