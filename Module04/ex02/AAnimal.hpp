/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 19:44:40 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/06/29 20:50:24 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class AAnimal
{
private:

protected:
    std::string _type;

public:
    AAnimal(void);
    AAnimal(std::string type);
    AAnimal(const AAnimal & src);
    AAnimal & operator=(const AAnimal & src);
    virtual ~AAnimal();

    std::string getType(void) const;
    void setType(std::string const type);
    virtual void makeSound(void) const = 0;
};

#endif
