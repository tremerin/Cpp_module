/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 01:16:13 by fgalan-r          #+#    #+#             */
/*   Updated: 2024/01/03 04:06:33 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <ctime>

class	Base
{
	public:
		virtual	~Base(void){};
		static Base	*generate(void);
		static void	identify(Base *p);
		static void	identify(Base &p);

};

class	A : public Base {};
class	B : public Base {};
class	C : public Base {};

#endif