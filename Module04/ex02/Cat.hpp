/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 19:44:59 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/06/28 20:39:17 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
private:
    Brain *_brain;

public:
    Cat();
    Cat(const Cat & src);
    Cat & operator=(const Cat & src);
    ~Cat();

    void makeSound(void) const;
    void newIdea(const unsigned int i, const std::string idea);
    void printfIdea(const unsigned int i);
};

#endif
