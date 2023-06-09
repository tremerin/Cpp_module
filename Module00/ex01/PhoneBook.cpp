/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 18:15:59 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/05/12 18:16:02 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->_memPos = -1;
	this-> _on = true;
	this->_searchLen = 0;
	this->_numContacts = 0;
	_indexContacts();
}

PhoneBook::~PhoneBook(void)
{
}

void PhoneBook::_indexContacts(void)
{
	int	i = 0;
	while (i < 8)
	{
		this->_contact[i].setIndex(i + 1);
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
		std::cout << "Enter command: ";
		if (!std::getline(std::cin, this->_input))
			exit(0);
		if (_input.compare("EXIT") == 0)
			_on = false;
		else if (_input.compare("ADD") == 0)
			_addContact();
		else if (_input.compare("SEARCH") == 0)
			_searchContact();
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
	if (_searchLen < 8)
		_searchLen++;
	if (_numContacts < 8)
		_numContacts++;
	_contact[_memPos].createContact();
}

void PhoneBook::_searchContact(void)
{
	int	i = 0;
	std::cout << _searchLen << " contacts" << std::endl;
	if (_numContacts > 0)
	{
		while (i < _searchLen)
		{
			_contact[i].listContact();
			i++;
		}
		std::cout << "choose a contact: " << std::flush;
		std::string contact = "";
		bool valid = false;
		int select;
		std::cin.clear();
		while (valid == false)
		{
			if (!std::getline(std::cin, contact))
				exit(0);
			if (contact.length() == 1 && contact[0] >= '1' && contact[0] <= '8')
			{
				select = contact[0] - '0';
				if (select <= _numContacts)
					valid = true;
			}
			if (!std::cin.eof() && valid == false)
			{
				std::cout << "invalid index" << std::endl;
				std::cout << "choose a contact: " << std::flush;
			}
		}
		std::cout << std::endl;
		_contact[select -1].viewContact();
	}
}
