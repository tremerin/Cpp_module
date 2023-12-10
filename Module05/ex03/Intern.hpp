/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 03:26:22 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/12/09 18:47:27 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class AForm;

class Intern
{
private:

public:
    Intern();
    Intern(const Intern & src);
    ~Intern();
    Intern & operator=(const Intern & rhs);
    AForm *makeForm(std::string name, std::string target);

    class NullPointer : public std::exception
	{
        public:
            virtual const char* what() const throw() {return "Null pointer";}
    };

};

#endif
