/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 17:37:15 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/06/19 17:37:17 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H

# include "Fixed.hpp"

class Point
{
private:
    const Fixed _x;
    const Fixed _y;

public:
    Point(void);
    Point(Point const & src);
    Point & operator = (Point const & rhs);
    Point(const float x, const float y);
    ~Point();

    Fixed   getX(void) const;
    void    setX(Fixed const x);
    Fixed   getY(void) const;
    void    setY(Fixed const y);

};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
