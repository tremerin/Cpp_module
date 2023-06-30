/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WorngAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 19:41:17 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/06/30 12:37:30 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WORNGANIMAL_HPP
# define WORNGANIMAL_HPP

# include <iostream>

class WorngAnimal
{
private:

protected:
    std::string _type;

public:
    WorngAnimal(void);
    WorngAnimal(std::string type);
    WorngAnimal(const WorngAnimal & src);
    WorngAnimal & operator=(const WorngAnimal & src);
    virtual ~WorngAnimal();

    std::string getType(void) const;
    void setType(std::string const type);
    void makeSound(void) const;
};

#endif
