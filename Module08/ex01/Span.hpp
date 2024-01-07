/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 04:50:16 by fgalan-r          #+#    #+#             */
/*   Updated: 2024/01/07 18:30:13 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <ctime>
# include <cmath>

class Span
{
private:
    unsigned int        _N;
    unsigned int        _size;
    std::vector<int>    _vector;
    Span(void);

public:
    Span(const unsigned int N);
    Span(const Span & src);
    ~Span();

    Span & operator=(const Span & rhs);

    void    addNumber(const int number);
    int     shortestSpan(void);
    int     longestSpan(void);

	class MaxSizeException : public std::exception
	{
        public:
            virtual const char* what() const throw() { return "maximum space achieved"; }
    };
};

#endif
