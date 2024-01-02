/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 05:29:57 by fgalan-r          #+#    #+#             */
/*   Updated: 2024/01/02 05:38:16 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main(void)
{
    Data test;
    test.somestr = "Hello there";
    test.someint = 42;
    std::cout << "Original: " << &test << std::endl;
    std::cout << test.somestr << std::endl;
    std::cout << test.someint << std::endl;

    uintptr_t raw;
    raw = Serializer::serialize(&test);
    std::cout << "Serialized: " << raw << std::endl;
    std::cout << test.somestr << std::endl;
    std::cout << test.someint << std::endl;

    Data *dataPtr;
    dataPtr = Serializer::deserialize(raw);
    std::cout << "Deserialized: " << dataPtr << std::endl;
    std::cout << dataPtr->somestr << std::endl;
    std::cout << dataPtr->someint << std::endl;
}