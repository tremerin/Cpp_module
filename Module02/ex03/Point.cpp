#include "Point.hpp"

Point::Point(void) : _x(0), _y(0)
{
    std::cout << "Point: Default constructor called" << std::endl;
}

Point::Point(Point const & src) : _x(src._x), _y(src._y)
{
    std::cout << "Point: Copy constructor called" << std::endl;
    *this = src;
}

Point::Point(const float x, const float y) : _x(x), _y(y)
{
    std::cout << "Point: Constructor set x y called" << std::endl;

}

Point::~Point()
{
    std::cout << "Point: Destructor called" << std::endl;
}

Fixed   Point::getX(void) const
{
    return (this->_x);
}

Fixed   Point::getY(void) const
{
    return (this->_y);
}

void    Point::setX(Fixed const x)
{
    (Fixed)this->_x = x;
}

void    Point::setY(Fixed const y)
{
    (Fixed)this->_y = y;
}

Point & Point::operator = (const Point & rhs)
{
    this->setX(rhs.getX());
    this->setY(rhs.getY());
    //(Fixed)this->_x = rhs.getX();
    //(Fixed)this->_y = rhs.getY();
    return (*this);
}