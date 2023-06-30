/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WorngCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 19:41:33 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/06/30 12:37:40 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WORNGCAT_HPP
# define WORNGCAT_HPP

# include "WorngAnimal.hpp"

class WorngCat : public WorngAnimal
{
private:

public:
    WorngCat();
    ~WorngCat();

    void makeSound(void) const;
};

#endif
