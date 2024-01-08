/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 05:38:16 by fgalan-r          #+#    #+#             */
/*   Updated: 2024/01/08 20:12:58 by fgalan-r         ###   ########.fr       */
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
    this->_vector.reserve(_N);
    this->_size = this->_N;
    /* srand(time(NULL));
    //std::fill(this->_vector.begin(), this->_vector.end(), rand());
    std::vector<int>::iterator it;
    std::vector<int>::iterator ite = this->_vector.end();
    for (it = this->_vector.begin(); it != ite; it++)
        *it = rand(); */
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

void    Span::addNumber(const int number)
{
    if (this->_size < this->_N)
    {
        this->_vector.push_back(number);
        this->_size++;
    }
    else
        throw MaxSizeException();
}

void    Span::fillSpan(const unsigned int n)
{
    srand(time(NULL));

    unsigned int i = 0;
    while (i < n)
    {
        if (this->_size < this->_N)
        {
            this->_vector.push_back(rand());
            this->_size++;
        }
        else
            throw MaxSizeException();
        i++;
    }
    /* std::vector<int>::iterator it;
    std::vector<int>::iterator ite = this->_vector.end();
    for (it = this->_vector.begin(); it != ite; it++)
        *it = rand(); */

    //std::generate(this->_vector.begin(), this->_vector.end(), rand());
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
            std::cout << "it: " << *it << std::endl;
        }
        return (span);
    }
    return (-1);
}

int Span::longestSpan(void)
{
    if (this->_size > 1)
    {
        std::vector<int> cp(_vector.size());
        std::copy(this->_vector.begin(), this->_vector.end(), cp.begin());
        std::sort(cp.begin(), cp.end());
        std::vector<int>::const_iterator it;
        std::vector<int>::const_iterator ite = cp.end();
        for (it = cp.begin(); it < ite; it++)
            std::cout << *it << std::endl;
        std::cout << "La operacion es " << *(cp.end() -1) << " - " << *cp.begin() << std::endl;
        std::cout << "La operacion es " << cp.back() << " - " << cp.front() << std::endl;
        //return (*cp.end() - *cp.begin());
        return (std::abs(cp.back() - cp.front()));
    }
    return (-1);
}

