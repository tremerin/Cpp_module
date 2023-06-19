/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 17:36:46 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/06/19 18:13:56 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(void)
{
    Point a(21, 7);
    Point b(21, 20);
    Point c(12.11f, 32.5f);
    Point point(21, 10);
    std::cout << "vertex a: " << a.getX() << ", " << a.getY() <<std::endl;
    std::cout << "vertex b: " <<b.getX() << ", " << b.getY() <<std::endl;
    std::cout << "vertex c: " <<c.getX() << ", " << c.getY() <<std::endl;
    std::cout << "point: " <<point.getX() << ", " << point.getY() <<std::endl;

    bool triangle = bsp(a, b, c, point);
    if (triangle)
        std::cout << "point inside the triangle" << std::endl;
    else
        std::cout << "point outside the triangle" << std::endl;

    return (0);
}
