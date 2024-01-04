/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 05:38:16 by fgalan-r          #+#    #+#             */
/*   Updated: 2024/01/04 06:16:26 by fgalan-r         ###   ########.fr       */
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

