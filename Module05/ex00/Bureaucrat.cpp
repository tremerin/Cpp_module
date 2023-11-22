/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 04:26:59 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/11/22 04:36:31 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string & name, int grade )
: _name(name), _grade(grade) 
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    //std::cout << "Constructor is called" <<std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat & src)
: _name(src._name), _grade(src._grade) 
{
    //std::cout << "Copy constructor is called" <<std::endl;
}

Bureaucrat::~Bureaucrat() 
{
    //std::cout << "Destructor is called" <<std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat & rhs)
{
    //std::cout << "Assignation operator called" << std::endl;
    if (this != &rhs)
        _grade = rhs.getGrade();
    return *this;
}

std::string Bureaucrat::getName() const 
{
    return _name;
}

int Bureaucrat::getGrade() const
{
    return _grade;
}

void    Bureaucrat::incrementGrade()
{
    if ( _grade - 1 < 1 )
        throw Bureaucrat::GradeTooHighException();
    _grade--;
}

void    Bureaucrat::decrementGrade()
{
    if ( _grade + 1 > 150 )
        throw Bureaucrat::GradeTooLowException();
    _grade++;
}

std::ostream & operator<<(std::ostream & o, const Bureaucrat & rhs)
{
    o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
    return o;
}