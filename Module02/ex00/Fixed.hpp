#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{

private:
    int _integer;
    int static const _bits = 8;

public:
    Fixed();
    Fixed(Fixed const & src);
    ~Fixed();
    int getRawBits(void) const;
    void setRawBits(int const raw); 
    Fixed & operator=(Fixed const & rhs); //operador de asignacion
    //Integer & operator=(Integer const & rhs); //rhs = right hand side
};

#endif