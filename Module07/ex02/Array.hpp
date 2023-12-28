/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 18:42:47 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/12/28 19:25:44 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template<typename T>
class Array
{
private:

public:
	T *array;
	Array(void)
	{
		this->array = new T[0];
	}

	Array(unsigned int length)
	{
		this->array = new T[length];
	}

	~Array()
	{

	}
};

#endif
