#include "Contact.hpp"

Contact::Contact(void)
{
	//std::cout << "Contact class created" << std::endl;
}

Contact::~Contact(void)
{
	//std::cout << "Contact class destroyed" << std::endl;
}

void Contact::createContact(void)
{
	this->_firstName = this->_fillField("firstName");
	this->_lastName = this->_fillField("lastName");
	this->_nickname = this->_fillField("nickname");
	this->_phoneNumber = this->_fillField("phoneNumber");
	this->_darkestSecret = this->_fillField("darkestSecret");
	this->viewContact();
}

std::string Contact::_fillField(std::string field)
{
	std::string input = "";
	bool valid = false;
	std::cout << "Enter " << field << ": " << std::endl;
	while (valid == false)
	{
		std::getline(std::cin, input);
		if (std::cin.good() && !input.empty())
			valid = true;
	}
	return (input);
}

void Contact::viewContact(void) const
{
	std::cout << "Index: " << this->_index << std::endl;
	std::cout << "First name: " << this->_firstName << std::endl;
	std::cout << "Last name: " << this->_lastName << std::endl;
	std::cout << "Nickname: " << this->_nickname << std::endl;
	std::cout << "Phone number: " << this->_phoneNumber << std::endl;
	std::cout << "Darkest secret: " << this->_darkestSecret << std::endl;
	std::cout << std::endl;
}