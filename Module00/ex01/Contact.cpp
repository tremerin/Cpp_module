#include <iostream>
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
	std::string input;
	std::cout << "Enter " << field << ": ";
	std::cin >> input;
	return (input);
}

void Contact::viewContact(void)
{
	std::cout << this->_firstName << std::endl;
	std::cout << this->_lastName << std::endl;
	std::cout << this->_nickname << std::endl;
	std::cout << this->_phoneNumber << std::endl;
	std::cout << this->_darkestSecret << std::endl;
}