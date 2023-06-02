/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 19:10:43 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/06/02 19:10:46 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int main(int argc, char **argv)
{
    if (argc == 4)
        Replace replace(argv[1], argv[2], argv[3]);
    else
        std::cerr << "arguments: " << argc << ", need 4" << std::endl;
    return (0);
}
