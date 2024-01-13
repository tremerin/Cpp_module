/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 18:24:19 by fgalan-r          #+#    #+#             */
/*   Updated: 2024/01/13 18:55:23 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
private:

public:
	MutantStack(void);
	MutantStack(const MutantStack  & src);
	~MutantStack(void);

	MutantStack & operator=(MutantStack const &source);

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator	begin(void);
	iterator	end(void);


};

template <typename T>
MutantStack<T>::MutantStack(void)
{
	std::cout << "MutandStack constructor called" << std::endl;
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack & src)
{
	std::cout << "MutandStack copy constructor called" << std::endl;
	*this = src;
};

template <typename T>
MutantStack<T>::~MutantStack()
{
	std::cout << "MutandStack destructor called" << std::endl;
};

template <typename T>
MutantStack<T> & MutantStack<T>::operator=(const MutantStack & src)
{
	std::cout << "Asignation operator called" << std::endl;
	if (this != src)
		std::stack<T>::operator=(src);
	return (*this);
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin(void)
{
	return (std::stack<T>::c.begin());
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end(void)
{
	return (std::stack<T>::c.end());
}
