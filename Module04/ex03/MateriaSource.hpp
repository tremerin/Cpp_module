/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 18:58:18 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/06/30 19:35:25 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria    *_materias[4];

    public:
        MateriaSource(void);
        MateriaSource(MateriaSource const & src);
        MateriaSource & operator=(MateriaSource const & src);
        ~MateriaSource();

        AMateria    *getMateria(std::string const & type);
        AMateria    *createMateria(std::string const & type);
        void        learnMateria(AMateria *);
        
};

#endif