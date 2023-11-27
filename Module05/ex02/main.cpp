/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 04:46:07 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/11/27 05:05:44 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
    try
    {
        Bureaucrat bureaucrat1("Burocrata 1",10);
        Bureaucrat bureaucrat2("Burocrata 2",21);
        //AForm form1("Formulario 1", 20 , 5);
        AForm *form2 = new ShrubberyCreationForm("target");
        AForm *form3 = new ShrubberyCreationForm("target", 2);

        bureaucrat2.signForm(*form2);

        std::cout << *form2 << std::endl;
        std::cout << *form3 << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}