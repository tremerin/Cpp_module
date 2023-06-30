/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 17:40:41 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/06/30 19:40:53 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
public:
    Ice();
    Ice(Ice const & );
    Ice & operator=(Ice const &);
    ~Ice();

    virtual AMateria *clone() const;
    virtual void      use(ICharacter& target);
 
};

#endif