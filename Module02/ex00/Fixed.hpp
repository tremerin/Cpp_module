/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 17:31:31 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/06/19 17:32:45 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{

private:
    int _integer;
    int static const _bits = 8;

public:
    Fixed();
    Fixed(Fixed const & src);
    Fixed & operator=(Fixed const & rhs);
    ~Fixed();

    int getRawBits(void) const;
    void setRawBits(int const raw);
};

#endif
