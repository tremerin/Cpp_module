/* PhoneBook */
#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
private:
    Contact _contact[8];
    char    _option;
public:
    PhoneBook();
    ~PhoneBook();
    void Menu();
};

#endif