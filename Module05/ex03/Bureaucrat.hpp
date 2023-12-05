/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 04:27:08 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/11/29 23:39:13 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "AForm.hpp"

class AForm;

class Bureaucrat
{
private:
	//constructor vacio, forma canonica
	Bureaucrat(void);
	const std::string	_name;
	int					_grade;

public:
	//una o mas sobrecargas del constructor
	Bureaucrat(const std::string & name, int grade);
	//constructor de copia, forma canonica
	Bureaucrat(const Bureaucrat & src);
	//destructor, forma canonica
	~Bureaucrat();

	//operador de asignacion, forma canonica
	Bureaucrat & operator=(const Bureaucrat & rhs);

	std::string 	getName(void) const;
	int				getGrade(void) const;
	void			incrementGrade(void);
	void			decrementGrade(void);
	void        	signForm(AForm & form);
	void        	executeForm(const AForm & form) const;

	//Exeception Classes
	//heredan de la clase padre exception, implementamos la virtual funcion what()
	class GradeTooHighException : public std::exception
	{
        public:
            virtual const char* what() const throw() { return "Grade too high"; }
    };
    class GradeTooLowException : public std::exception
	{
        public:
            virtual const char* what() const throw() { return "Grade too low"; }
    };
	
};
//operador de insercion
std::ostream &  operator<<(std::ostream & o, const Bureaucrat & rhs);

#endif