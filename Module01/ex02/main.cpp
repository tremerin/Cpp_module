/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 19:40:17 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/06/02 19:40:20 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << &str       << std::endl;
	std::cout << stringPTR  << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout << str        << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF  << std::endl;

	return (0);
}
