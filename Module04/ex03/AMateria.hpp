/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 13:32:34 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/07/02 20:53:51 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class ICharacter; //no entiendo

class AMateria
{
protected:
	std::string	_type;

public:
	AMateria(void);
	AMateria(std::string const & type);
	AMateria(const AMateria & src);
	virtual ~AMateria();

	std::string const & getType() const; //Returns the materia type
	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter& target);
	
};

#endif
