#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
private:

protected:
    std::string _type;

public:
    Animal(void);
    Animal(std::string type);
    Animal(const Animal & src);
    Animal & operator=(const Animal & src);
    virtual ~Animal();

    std::string getType(void) const;
    void setType(std::string const type);
    virtual void makeSound(void) const;
};

#endif
