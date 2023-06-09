/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 17:52:04 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/05/12 17:52:08 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	std::string  str = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";

	if (argc == 1)
		std::cout << str << std::endl;
	else
	{
		char    c;
		int     i = 1; 
		int		j = 0;
		while (i < argc)
		{
			j = 0;
			while (argv[i][j] != '\0')
			{
				c = toupper(argv[i][j]);
				std::cout << c; 
				j++;
			}
			std::cout << std::endl;
			i++;
		}
	}
	return (0);
}
