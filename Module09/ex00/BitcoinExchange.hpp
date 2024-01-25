/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 02:05:24 by fgalan-r          #+#    #+#             */
/*   Updated: 2024/01/25 18:54:35 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <algorithm>
# include <fcntl.h>
# include <string>
# include <map>

class BitcoinExchange
{
private:
    BitcoinExchange(void);
    BitcoinExchange(const BitcoinExchange & src);
    ~BitcoinExchange();
    BitcoinExchange & operator=(const BitcoinExchange & src);
    //std::map<std::string, float>    _data;

public:
    static void bitcoinExchange(std::string file);

};



#endif
