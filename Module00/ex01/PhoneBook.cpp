#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	//std::cout << "PhoneBook class created" << std::endl;
	this->_memPos = 0;
	this-> _on = true;
	_indexContacts();
}

PhoneBook::~PhoneBook(void)
{
	//std::cout << "PhoneBook class destroyed" << std::endl;
}

void PhoneBook::_indexContacts(void)
{
	int	i = 0;
	while (i < 8)
	{
		this->_contact[i]._index = i + 1;
		i++;
	}
}

void PhoneBook::menu(void)
{
	std::cout << "Welcome, please choose an option:" << std::endl;
	while (_on == true)
	{
		std::cout << ">> ADD ......... Add a new contact" << std::endl;
		std::cout << ">> SEARCH ...... Search for a contact" << std::endl;
		std::cout << ">> EXIT ........ Close the program" << std::endl;
		std::cin >> this->_input;
		if (_input.compare("EXIT") == 0)
			_on = false;
		else if (_input.compare("ADD") == 0)
		{
			std::cout << "Added contact" << std::endl;
			_addContact();
		}
		else if (_input.compare("SEARCH") == 0)
		{
			std::cout << "Searching contacts" << std::endl;
			//_searchContact();
		}
		else
			std::cout << "Invalid command: " << _input << std::endl;
	}
}

void PhoneBook::_contactPos(void)
{
	this->_memPos++;
	if (this->_memPos > 7)
		this->_memPos = 0;
}

void PhoneBook::_addContact(void)
{
	_contactPos();
	_contact[_memPos].createContact();
}