/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 19:55:23 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/12/28 18:39:34 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void iter(T *array, unsigned length, void(*f)(T &))
{
	for (int x = 0; x < lenght; x++)
	{
		funt(array[i]);
	}
}

template <typename T>
void funt(T item)
{
	std::cout << T << std::endl;
}
#endif
