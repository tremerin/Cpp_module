/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 19:45:40 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/06/28 21:54:44 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
private:
    Brain   *_brain;

public:
    Dog();
    Dog(const Dog & src);
    Dog & operator=(const Dog & src);
    ~Dog();

    void makeSound(void) const;
};

#endif
