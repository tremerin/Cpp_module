/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 04:50:16 by fgalan-r          #+#    #+#             */
/*   Updated: 2024/01/09 19:52:46 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <ctime>
# include <cmath>
# include <limits>

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
    void    fillSpan(const unsigned int n);

	class MaxSizeException : public std::exception
	{
        public:
            virtual const char* what() const throw() { return "maximum space achieved"; }
    };
    class NoIntException : public std::exception
	{
        public:
            virtual const char* what() const throw() { return "is not an integer"; }
    };
    class NoNumberStored : public std::exception
	{
        public:
            virtual const char* what() const throw() { return "no number stored"; }
    };
};

#endif
