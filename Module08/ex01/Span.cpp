/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 05:38:16 by fgalan-r          #+#    #+#             */
/*   Updated: 2024/01/06 04:59:13 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) : _N(0), _size(0)
{
    std::cout << "constructor called" << std::endl;
}

Span::Span(const unsigned int n) : _N(n), _size(0)
{
    std::cout << "constructor called" << std::endl;
}

Span::Span(const Span & src)
{
    *this = src;
    std::cout << "copy constructor called" << std::endl;
}

Span::~Span()
{
    std::cout << "destructor called" << std::endl;
}

Span & Span::operator=(const Span & rhs)
{
    if (this != &rhs)
    {
        this->_N = rhs._N;
        this->_size = rhs._size;
        this->_vector = rhs._vector;
    }
    return (*this);
}

void Span::addNumber(const int number)
{
    if (this->_size < this->_N)
    {
        this->_vector.push_back(number);
        this->_size++;
    }
    else
        throw MaxSizeException();
}

int Span::shortestSpan(void)
{
    if (this->_size > 1)
    {
        std::vector<int> cp = this->_vector;
        std::sort(cp.begin(), cp.end());
        int span = cp[1] - cp[0];
        //std::cout << "init span: " << span << std::endl;
        std::vector<int>::const_iterator it;
        std::vector<int>::const_iterator ite = cp.end();
        for (it = cp.begin(); it < ite - 1; it++)
        {
            if (*(it + 1) - *it < span)
                span = *(it + 1) - *it;
            //std::cout << "span: " << span << std::endl;
            //std::cout << "it: " << *it << std::endl;
        } 
        return (span);
    }
    return (-1);
}

int Span::longestSpan(void)
{
    if (this->_size > 1)
    {
        std::vector<int> cp = this->_vector;
        std::sort(cp.begin(), cp.end());
        /* std::vector<int>::const_iterator it;
        std::vector<int>::const_iterator ite = cp.end();
        for (it = cp.begin(); it < ite; it++)
            std::cout << *it << std::endl; */
        return (*cp.end() - *cp.begin());
    }
    return (-1);
}

