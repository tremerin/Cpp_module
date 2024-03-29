/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 04:47:46 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/12/01 19:13:19 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string & name, int gradeToSign)
: _name(name), _gradeToSign(gradeToSign), _gradeToExecute(0)
{
    if (gradeToSign < 1)
        throw Form::GradeTooHighException();
    if (gradeToSign > 150)
        throw Form::GradeTooLowException();
    //std::cout << "Constructor is called" <<std::endl;
}

Form::Form(const std::string & name, int gradeToSign, int gradeToExecute)
: _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
    if (gradeToSign < 1)
        throw Form::GradeTooHighException();
    if (gradeToSign > 150)
        throw Form::GradeTooLowException();
    //std::cout << "Constructor is called" <<std::endl;
}

Form::Form(const Form & src)
: _name(src.getName()), _gradeToSign(src.getGradeToSign()), _gradeToExecute(src.getGradeToExecute())
{
    //std::cout << "Copy onstructor is called" <<std::endl;
}

Form::~Form()
{
    //std::cout << "Destructor is called" <<std::endl;
}

Form&   Form::operator=(const Form& rhs)
{
    //std::cout << "Assignation operator called" << std::endl;
    if (this != &rhs)
        _signed = rhs.getSigned();
    return *this;
}

std::string Form::getName() const
{
    return _name;
}

bool   Form::getSigned() const
{
    return _signed;
}

int   Form::getGradeToSign() const
{
    return _gradeToSign;
}

int   Form::getGradeToExecute() const
{
    return _gradeToExecute;
}

void    Form::beSigned(const Bureaucrat & bureaucrat)
{
    if (bureaucrat.getGrade() > _gradeToSign)
        throw Form::GradeTooLowException();
    _signed = true;
}

std::ostream &  operator<<(std::ostream & o, const Form & rhs)
{
    o << "Info:" << std::endl;
    o << "Form name: " << rhs.getName() << std::endl;
    o << "Grade to sign: " << rhs.getGradeToSign() << std::endl;
    o << "Grade to execute: " << rhs.getGradeToExecute() << std::endl;
    return o;
}
