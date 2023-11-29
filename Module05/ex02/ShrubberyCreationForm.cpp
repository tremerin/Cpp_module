/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 04:24:07 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/11/29 23:43:36 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string & target)
: AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
    std::cout << "Shrubbery constructor is called" <<std::endl;
}

/* ShrubberyCreationForm::ShrubberyCreationForm(const std::string & name, int gradeToSing)
: AForm(name, gradeToSing)
{

}
 */
void ShrubberyCreationForm::execute(const Bureaucrat & executor) const
{
    if (this->getSigned() == false)
        throw AForm::NotSignedException();
    else if (executor.getGrade() > this->getGradeToExecute()) 
        throw AForm::GradeTooLowException();

    std::cout << executor.getName() << " execute " << this->getName() << std::endl;
    std::ofstream file("archivo.txt");
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