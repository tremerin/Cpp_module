/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 19:11:14 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/06/26 19:11:15 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_CPP
# define CLAPTRAP_CPP

# include <iostream>

class ClapTrap
{
private:
    std::string _name;
    int         _hitPoints;
    int         _energyPoints;
    int         _attackDamage;

public:
    ClapTrap(void);
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap & src);
    ClapTrap & operator=(ClapTrap const & rhs);
    ~ClapTrap();

    std::string getName(void) const;
    void        setName(std::string const name);
    int         getHitPoints(void) const;
    void        setHitPoints(int const hitpoints);
    int         getEnergyPoints(void) const;
    void        setEnergyPoints(int const energy);
    int         getAttackDamage(void) const;
    void        setAttackDamage(int const attack);

    void        attack(const std::string& target);
    void        takeDamage(unsigned int amount);
    void        beRepaired(unsigned int amount);

    void        info(void);
};

#endif
