/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 19:55:23 by fgalan-r          #+#    #+#             */
/*   Updated: 2024/01/21 18:06:00 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

/* template <typename T>
void iter(T *array, unsigned length, void(*f)(T &))
{
	for (unsigned int i = 0; i < length; i++)
	{
		f(array[i]);
	}
}

template <typename T>
void iter(T *array, unsigned length, void(*f)(T const &))
{
	for (unsigned int i = 0; i < length; i++)
	{
		f(array[i]);
	}
} */

template <typename T>
void iter(T *array, unsigned length, void(*f)(T &))
{
	for (unsigned i = 0; i < length; i++)
		f(array[i]);
}

template <typename T>
void funt(T & item)
{
	std::cout << item << std::endl;
}

#endif
