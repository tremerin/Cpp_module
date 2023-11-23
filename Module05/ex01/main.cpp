/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 04:46:07 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/11/23 05:19:36 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    try
    {
        Bureaucrat bureaucrat1("Burocrata 1",10);
        Bureaucrat bureaucrat2("Burocrata 2",21);
        Form form1("Formulario 1", 20 , 5);

        bureaucrat1.signForm(form1);
        bureaucrat2.signForm(form1);

        std::cout << form1<< std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}