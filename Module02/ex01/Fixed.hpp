/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 17:33:17 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/06/19 17:33:43 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{

private:
    int _integer;
    int static const _bits = 8;

public:
    Fixed(void);
    Fixed(Fixed const & src);
    Fixed & operator=(Fixed const & rhs);
    Fixed(const int n);
    Fixed(const float n);
    ~Fixed();

    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;

};

std::ostream & operator<<(std::ostream & o, Fixed const & i);

#endif
