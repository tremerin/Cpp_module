/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 04:46:07 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/11/29 22:47:57 by fgalan-r         ###   ########.fr       */
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
        //AForm *form3 = new ShrubberyCreationForm("target", 2);

        bureaucrat2.signForm(*form2);

        std::cout << *form2 << std::endl;
        //std::cout << *form3 << std::endl;
        form2->execute(bureaucrat1);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "end" << std::endl;
    return (0);
}