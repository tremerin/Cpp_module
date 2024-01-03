/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 04:01:22 by fgalan-r          #+#    #+#             */
/*   Updated: 2024/01/03 04:05:43 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base	*Base::generate(void) {

	int	random;
	std::srand(time(0));
	random = std::rand() % 3;

	if (random == 0)
		return (new A);
	else if (random == 1)
		return (new B);
	else
		return (new C);
}

void	Base::identify(Base *p) {

	if (dynamic_cast<A *>(p))
		std::cout << "I'm A *" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "I'm B *" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "I'm C *" << std::endl;

}

void	Base::identify(Base &p) {

	Base	base;
	try {
		base = dynamic_cast<A &>(p);
		std::cout << "I'm A &" << std::endl;
	} catch (std::bad_cast &err) {}
	try {
		base = dynamic_cast<B &>(p);
		std::cout << "I'm B &" << std::endl;
	} catch (std::bad_cast &err) {}
	try {
		base = dynamic_cast<C &>(p);
		std::cout << "I'm C &" << std::endl;
	} catch (std::bad_cast &err) {}

}