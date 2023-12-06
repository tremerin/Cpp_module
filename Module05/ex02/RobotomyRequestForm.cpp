/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 20:12:30 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/12/06 19:57:40 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string target)
: AForm("RobotomyRequestForm", 72, 45), _target(target)
{
    std::cout << "Robotomy constructor is called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & src)
: AForm(src), _target(src._target)
{
    std::cout << "Robotomy copy constructor is called" <<std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "Robotomy destructor is called" <<std::endl;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm & rhs)
{
    std::cout << "Asignation operator is called" << std::endl;
    (void)rhs;
    return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat & executor) const
{
    if (this->getSigned() == false)
        throw AForm::NotSignedException();
    else if (executor.getGrade() > this->getGradeToExecute())
        throw AForm::GradeTooLowException();

    std::cout << "Bzzz Bzzzzzzzzz Buzzzz ..." << std::endl;
    srand(time(NULL));
    int random = rand();
    if (random % 2 == 0)
        std::cout << this->_target << " has been robotomized" << std::endl;
    else
        std::cout << "Robotomy failed" << std::endl;
}
