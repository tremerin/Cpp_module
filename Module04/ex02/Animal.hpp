/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 19:44:40 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/06/26 19:44:41 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class Animal
{
private:

protected:
    std::string _type;

public:
    Animal(void);
    Animal(std::string type);
    Animal(const Animal & src);
    Animal & operator=(const Animal & src);
    virtual ~Animal();

    std::string getType(void) const;
    void setType(std::string const type);
    virtual void makeSound(void) const;
};

#endif
