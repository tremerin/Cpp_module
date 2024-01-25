/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 12:26:11 by fgalan-r          #+#    #+#             */
/*   Updated: 2024/01/25 18:10:32 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "BitcoinExchange.hpp"

/* void	ft_leaks(void)
{
	system("leaks -q 'btc'");
} */

// atexit(ft_leaks);

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        BitcoinExchange::bitcoinExchange(argv[1]);
    }
    else
    {
        std::cout << "Usage: ./btc [filename]" << std::endl;
        return (1);
    }
    return (0);
}
