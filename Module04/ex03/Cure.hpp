/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 17:45:50 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/06/30 18:54:30 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
public:
    Cure();
    Cure( Cure const & );
    Cure& operator=( Cure const & );
    ~Cure();

    virtual AMateria *clone() const;
    virtual void      use(ICharacter& target);

};

#endif