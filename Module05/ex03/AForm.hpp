/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 04:49:05 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/12/03 21:29:02 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
private:
    const std::string   _name;
    bool                _signed;
    const int           _gradeToSign;
    const int           _gradeToExecute;
    AForm();

public:
    //AForm(const std::string & name, int gradeToSign);
    AForm(const std::string & name, int gradeToSign, int gradeToExecute);
    AForm(const AForm & src);
    virtual ~AForm();

    AForm &   operator=(const AForm & rhs);

    std::string     getName() const;
    bool            getSigned() const;
    int             getGradeToSign() const;
    int             getGradeToExecute() const;
    void            beSigned(const Bureaucrat & bureaucrat);
    virtual void	execute(const Bureaucrat & executor) const = 0;

    //Exception Classes
    class GradeTooHighException : public std::exception
    {
        public:
            virtual const char* what() const throw() {return "Grade too high";}
    };

    class GradeTooLowException : public std::exception
    {
        public:
            virtual const char* what() const throw() {return "Grade too low";}
    };

    class NotSignedException : public std::exception
    {
        public:
            virtual const char* what() const throw() {return "Form not signed";}
    };
};

std::ostream &  operator<<(std::ostream & o, const AForm & rhs);

#endif