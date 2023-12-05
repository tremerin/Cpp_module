/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 04:47:46 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/12/05 16:38:18 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

/* AForm::AForm(const std::string & name, int gradeToSign)
: _name(name), _gradeToSign(gradeToSign), _gradeToExecute(0), _signed(false)
{
    if (gradeToSign < 1)
        throw AForm::GradeTooHighException();
    if (gradeToSign > 150)
        throw AForm::GradeTooLowException();
    std::cout << "AForm constructor2 is called" <<std::endl;
} */

AForm::AForm(const std::string & name, int gradeToSign, int gradeToExecute)
: _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
    if (gradeToSign < 1)
        throw AForm::GradeTooHighException();
    if (gradeToSign > 150)
        throw AForm::GradeTooLowException();
    std::cout << "AForm constructor is called" <<std::endl;
}

AForm::AForm(const AForm & src)
: _name(src.getName()), _gradeToSign(src.getGradeToSign()), _gradeToExecute(src.getGradeToExecute())
{
    //std::cout << "Copy onstructor is called" <<std::endl;
}

AForm::~AForm()
{
    //std::cout << "Destructor is called" <<std::endl;
}

AForm & AForm::operator=(const AForm & rhs)
{
    //std::cout << "Assignation operator called" << std::endl;
    if (this != &rhs)
        _signed = rhs.getSigned();
    return *this;
}

std::string AForm::getName() const
{
    return _name;
}

bool   AForm::getSigned() const
{
    return _signed;
}

int   AForm::getGradeToSign() const
{
    return _gradeToSign;
}

int   AForm::getGradeToExecute() const
{
    return _gradeToExecute;
}

void    AForm::beSigned(const Bureaucrat & bureaucrat)
{
    if (bureaucrat.getGrade() > _gradeToSign)
        throw AForm::GradeTooLowException();
    _signed = true;
}

std::ostream &  operator<<(std::ostream & o, const AForm & rhs)
{
    o << "<<< Form Info >>>"  << std::endl;
    o << "Form name       : " << rhs.getName() << std::endl;
    o << "Grade to sign   : " << rhs.getGradeToSign() << std::endl;
    o << "Grade to execute: " << rhs.getGradeToExecute() << std::endl;
    return o;
}
