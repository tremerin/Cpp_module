#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
private:
    Brain *_Brain;

public:
    Cat();
    ~Cat();

    void makeSound(void) const;
};

#endif