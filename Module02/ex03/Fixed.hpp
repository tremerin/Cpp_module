/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 17:36:34 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/06/19 17:36:40 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{

private:
	int					_integer;
	int static const	_bits = 8;

public:
	Fixed(void);
	Fixed(Fixed const & src);
	Fixed & operator=(Fixed const & rhs);
	Fixed(const int n);
	Fixed(const float n);
	~Fixed();

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int 	toInt(void) const;

	static 	Fixed& max(Fixed &a, Fixed &b);
	static 	Fixed& min(Fixed &a, Fixed &b);
	static 	const Fixed& max(const Fixed &a, const Fixed &b);
	static 	const Fixed& min(const Fixed &a, const Fixed &b);

	bool    operator >	(Fixed const & rhs) const;
	bool    operator <  (Fixed const & rhs) const;
	bool    operator >= (Fixed const & rhs) const;
	bool    operator <=	(Fixed const & rhs) const;
	bool    operator ==	(Fixed const & rhs) const;
	bool    operator !=	(Fixed const & rhs) const;

	Fixed   operator + (const Fixed & rhs) const;
	Fixed   operator - (const Fixed & rhs) const;
	Fixed   operator * (const Fixed & rhs) const;
	Fixed   operator / (const Fixed & rhs) const;

	Fixed&  operator++ (void); // prefix
    Fixed   operator++ (int);  // postfix
    Fixed&  operator-- (void); // prefix
    Fixed   operator-- (int);  // postfix
};

std::ostream & operator<<(std::ostream & o, Fixed const & i);

#endif
