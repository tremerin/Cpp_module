/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 04:32:18 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/11/22 18:28:10 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    //operador vacio en private
    //Bureaucrat bureaucat; //operador vacio en private
    try
    {
        Bureaucrat bureaucrat2("Pepe", 2000);
        Bureaucrat bureaucrat3(bureaucrat2);
        std::cout << bureaucrat2 << std::endl;
        std::cout << bureaucrat3 << std::endl;

    }
    catch(const Bureaucrat::GradeTooHighException e)
    {
        std::cerr << e.what() << '\n';
    }
    catch(const Bureaucrat::GradeTooLowException e)
    {
        std::cerr << e.what() << '\n';
    }

    return (0);
}
