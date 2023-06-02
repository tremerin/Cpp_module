/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 19:38:27 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/06/02 19:38:29 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

# include "Weapon.hpp"

class HumanA
{
private:
    std::string _name;
    Weapon&     _weapon;
public:
    HumanA(std::string name, Weapon& weapon);
    ~HumanA();
    void attack(void);
};



#endif
