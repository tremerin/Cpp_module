#ifndef WORNGANIMAL_HPP
# define WORNGANIMAL_HPP

# include <iostream>

class WorngAnimal
{
private:

protected:
    std::string _type;

public:
    WorngAnimal(void);
    WorngAnimal(std::string type);
    WorngAnimal(const WorngAnimal & src);
    WorngAnimal & operator=(const WorngAnimal & src);
    virtual ~WorngAnimal();

    std::string getType(void) const;
    void setType(std::string const type);
    void makeSound(void) const;
};

#endif
