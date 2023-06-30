/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 19:48:57 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/06/30 20:02:15 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character : public ICharacter
{
private:
    std::string _name;
    AMateria    *_inventory[4];

public:
    Character(void);
    Character(std::string const _name);
    ~Character();

    std::string const & getName() const;
    void equip(AMateria *m);
    void unequip(int idx);
    void use(int idx, ICharacter & target);

};

#endif

