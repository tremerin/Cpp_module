#ifndef BRAIN_HPP
# define BRAIN_CPP

# include <iostream>

class Brain
{
private:
    std::string _ideas[100];
public:
    Brain(void);
    Brain(std::string ideas);
    Brain(const Brain & src);
    Brain & operator=(const Brain & src);
    ~Brain();
};


#endif