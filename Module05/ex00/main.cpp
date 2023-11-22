/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 04:32:18 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/11/22 04:43:08 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    //operador vacio en private
    //Bureaucrat bureaucat; //operador vacio en private
    Bureaucrat bureaucrat2("Pepe", 5);
    Bureaucrat bureaucrat3(bureaucrat2);
    std::cout << bureaucrat2 << std::endl;
    std::cout << bureaucrat3 << std::endl;

    return (0);
}