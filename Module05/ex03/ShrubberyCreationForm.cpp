/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 04:24:07 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/12/06 18:59:58 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string & target)
: AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
    std::cout << "Shrubbery constructor is called" <<std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & src)
: AForm(src), _target(src._target)
{
    std::cout << "Shrubbery copy constructor is called" <<std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "Shrubbery destructor is called" <<std::endl;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm & rhs)
{
    std::cout << "Asignation operator is called" << std::endl;
    (void)rhs;
    return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat & executor) const
{
    if (this->getSigned() == false)
        throw AForm::NotSignedException();
    else if (executor.getGrade() > this->getGradeToExecute())
        throw AForm::GradeTooLowException();

    std::cout << executor.getName() << " execute " << this->getName() << std::endl;
    std::ofstream file(this->_target + "_shrubbery");
    file << "                 " << std::endl;
    file << "       oOOoo     " << std::endl;
    file << "      oOOOOo     " << std::endl;
    file << "     ooOOOOoo    " << std::endl;
    file << "      oOOOOo     " << std::endl;
    file << "        ||       " << std::endl;
    file << "        ||       " << std::endl;
    file << "      ------     " << std::endl;
    file.close();
}
