/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:30:54 by fgalan-r          #+#    #+#             */
/*   Updated: 2024/01/25 16:36:28 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(void)
{
    std::cout << "RPN constructor is called" << std::endl;
}

RPN::RPN(RPN const &src) 
{
    std::cout << "RPN copy constructor is called" << std::endl;
	*this = src;
}

RPN::~RPN()
{
    std::cout << "RPN destructor is called" << std::endl;
}

RPN	& RPN::operator=(RPN const & rhs)
{
    std::cout << "RPN asignation operator is called" << std::endl;
	if (this != &rhs)
		*this = rhs;
	return *this;
}

int	operations(int a, int b, char op)
{
	switch (op) {
		case '+':
			return (a + b);
		case '-':
			return (a - b);
		case '*':
			return (a * b);
		case '/':
			return (a / b);
		default:
			throw RPN::InvalidExpressionException();
			break;
	}
	return (0);
}

int	RPN::calculate(std::string str)
{
	std::stack<int>	nums;
	std::string	token;
	size_t pos;
	int		a;
	int		b;

	if (str.find_first_not_of("0123456789+-*/ ") != std::string::npos)
		throw RPN::InvalidExpressionException();
	while ((pos = str.find_first_of(" ")) != std::string::npos || str.size() > 0)
    {
		token = str.substr(0, pos);
		if (std::isdigit(token[0]) && token.size() == 1)
			nums.push(std::stoi(token));
		else if (str.find_first_of("+-*/") != std::string::npos && token.size() == 1)
        {
			b = nums.top();
			nums.pop();
			a = nums.top();
			nums.pop();
			nums.push(operations(a, b, token[0]));
		}
		else
			throw RPN::InvalidExpressionException();
		if (pos == std::string::npos)
			pos = 0;
		str.erase(0, pos + 1);
	}
	if (nums.size() != 1)
		throw RPN::InvalidExpressionException();
	return (nums.top());
}