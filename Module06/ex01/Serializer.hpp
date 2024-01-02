/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 05:24:40 by fgalan-r          #+#    #+#             */
/*   Updated: 2024/01/02 05:41:23 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <stdint.h>
# include "Data.hpp"

class	Serializer
{
private:
    Serializer(void);
    ~Serializer(void);
    Serializer(Serializer const &source);
    Serializer & operator=(Serializer const &source);
public:
    static uintptr_t    serialize(Data* ptr);
    static Data*        deserialize(uintptr_t raw);
};

#endif