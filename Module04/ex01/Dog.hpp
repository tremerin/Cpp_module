#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
private:
    Brain   *_Brain;

public:
    Dog();
    ~Dog();

    void makeSound(void) const;
};

#endif