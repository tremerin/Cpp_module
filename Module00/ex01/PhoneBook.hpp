/* PhoneBook */
#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
private:
	Contact     _contact[8];
	std::string _input;
	int         _memPos;
	bool		_on;

	void _contactPos(void);
public:
	PhoneBook(void);
	~PhoneBook(void);
	void menu(void);
};

#endif