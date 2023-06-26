#ifndef WORNGCAT_HPP
# define WORNGCAT_HPP

# include "WorngAnimal.hpp"

class WorngCat : public WorngAnimal
{
private:

public:
    WorngCat();
    ~WorngCat();

    void makeSound(void) const;
};

#endif