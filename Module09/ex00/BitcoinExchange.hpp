/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 02:05:24 by fgalan-r          #+#    #+#             */
/*   Updated: 2024/01/18 04:18:28 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <algorithm>
# include <fcntl.h>
# include <map>

class BitcoinExchange
{
private:
    std::map<std::string, float>    _data;

public:
    BitcoinExchange(void);
    BitcoinExchange(const BitcoinExchange & src);
    ~BitcoinExchange();

    BitcoinExchange & operator=(const BitcoinExchange & src);
    
};



#endif