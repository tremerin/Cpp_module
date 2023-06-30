/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 19:44:45 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/06/30 12:35:57 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << "Brain constructor called" << std::endl;
    for (size_t i = 0; i < 100; i++)
    {
        this->_ideas[i] = "...";
    }
}

Brain::Brain(const Brain & src)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = src;
}

Brain & Brain::operator=(const Brain & src)
{
    if (this != &src)
    {
        for (int i = 0; i < 100; i++)
        {
            this->_ideas[i] = src._ideas[i];
        }
    }
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

void Brain::setIdea(const int i, const std::string idea)
{
    this->_ideas[i] = idea;
}

const std::string Brain::getIdea(const int i)
{
    return (this->_ideas[i]);
}
