/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 05:27:46 by fgalan-r          #+#    #+#             */
/*   Updated: 2024/01/02 05:43:02 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(void) { }

Serializer::~Serializer(void) { }

Serializer::Serializer(Serializer const &source)
{
    *this = source;
    return ;
}

Serializer & Serializer::operator=(Serializer const &source)
{
    (void)source;
    return (*this);
}

uintptr_t    Serializer::serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data*        Serializer::deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
}