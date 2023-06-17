#include "Point.hpp"

Point::Point(void) : _x(0), _y(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Point::~Point()
{

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

}

Point & Point::operator = (const Point & rhs)
{
    if ( this != &rhs ) {
    // const_cast< Fixed& >(this->_x) = rhs.getX();
    // const_cast< Fixed& >(this->_y) = rhs.getY();
    ( Fixed ) this->_x = rhs.getX();
    ( Fixed ) this->_y = rhs.getY();
    }
    return *this;
}