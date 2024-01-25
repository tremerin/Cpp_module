/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:31:24 by fgalan-r          #+#    #+#             */
/*   Updated: 2024/01/25 16:39:24 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <string>
# include <stack>

class	RPN
{
	private:
		RPN(void);
		RPN(RPN const &src);
		~RPN(void);
		RPN	&operator=(RPN const & rhs);

	public:
		static int	calculate(std::string str);

	class	InvalidExpressionException : public std::exception 
    {
		virtual const char* what() const throw() { return "Invalid Reverse Polish Notation Exception"; }
	};

};

#endif