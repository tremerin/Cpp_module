/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 03:39:22 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/11/29 23:41:39 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"
# include <fstream>

class AForm;

class ShrubberyCreationForm : public AForm
{
private:
    const std::string   _target;
    ShrubberyCreationForm();
public:
    ShrubberyCreationForm(const std::string & target);
    ShrubberyCreationForm(const std::string & name, int gradeToSing);
    //ShrubberyCreationForm(const std::string & name, int gradeToSing, int gradeToExecute);
    ShrubberyCreationForm(const ShrubberyCreationForm & src);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm & operator=(const ShrubberyCreationForm & rhs);
    //std::ostream & operator<<(std::ostream & o, const ShrubberyCreationForm & rhs);
    void	execute(const Bureaucrat & executor) const;
};

#endif