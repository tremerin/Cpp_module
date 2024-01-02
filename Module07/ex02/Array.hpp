/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 18:42:47 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/12/31 00:01:15 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template<typename T>
class	Array
{

private:
	unsigned int	_size;
	T 				*_array;

public:
	Array<T>(void) :  _size(0)
	{
		this->_array = new T[0];
		//std::cout << "Default Constructor called" << std::endl;
	}
	Array<T>(unsigned int n) : _size(n)
	{
		this->_array = new T[n];
		//std::cout << "Parametized Constructor called" << std::endl;
	}
	Array<T>(Array &src) :  _size(src._size)
	{
		this->_array = new T[this->_size];
		for (unsigned int i = 0; i < this->_size; i++)
			this->_array[i] = src._array[i];
		//std::cout << "Copy Constructor called" << std::endl;
	}

	~Array<T>(void)
	{
		delete	[]	_array;
		//std::cout << "Destructor called" << std::endl;
	};

	Array	& operator=(const Array & rhs)
	{
		if (this != &rhs)
		{
			delete [] _array;
			_array = new T[rhs._size];
			this->_size = rhs._size;
			for (unsigned int i = 0; i < this->_size; i++)
				this->_array[i] = rhs._array[i];
		}
		return *this;
	}
	
	T	& operator[](unsigned int i) const
	{
		if (i >= _size)
			throw OutOfBoundsException();
		return _array[i];
	}

	unsigned int	size(void) const
	{
		return this->_size;
	}

	class	OutOfBoundsException : public std::exception
	{
		virtual const char* what() const throw() { return " Out of Bounds"; };
	};

};

#endif
