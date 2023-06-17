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
    Point(const Fixed x, const Fixed y);
    ~Point();

    Fixed   getX(void) const;
    void    setX(Fixed const x);
    Fixed   getY(void) const;
    void    setY(Fixed const y);

};

#endif