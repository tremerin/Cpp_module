/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 04:27:08 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/11/21 04:55:33 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat
{
private:
	std::string const	_name;
	int					_grade;

public:
	Bureaucrat(void);
	Bureaucrat(std::string const name, int grade);
	~Bureaucrat();
	
};

#endif