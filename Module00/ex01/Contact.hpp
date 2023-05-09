/* Contact */
#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>

class Contact
{
private:
    std::string _firstName;
    std::string _lastName;
    std::string _nickname;
    std::string _phoneNumber;
    std::string _darkestSecret;

    std::string _fillField(std::string field);
public:
    int         _index;
    Contact();
    ~Contact();
    void createContact();
    void viewContact() const;
};

#endif