/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 18:00:48 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/05/12 18:00:51 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

void Contact::createContact(void)
{
	this->_firstName = this->_fillField("firstName");
	this->_lastName = this->_fillField("lastName");
	this->_nickname = this->_fillField("nickname");
	this->_phoneNumber = this->_fillField("phoneNumber");
	this->_darkestSecret = this->_fillField("darkestSecret");
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
	std::cout << "Index: " 			<< this->_index 		<< std::endl;
	std::cout << "First name: " 	<< this->_firstName 	<< std::endl;
	std::cout << "Last name: " 		<< this->_lastName 		<< std::endl;
	std::cout << "Nickname: " 		<< this->_nickname 		<< std::endl;
	std::cout << "Phone number: " 	<< this->_phoneNumber 	<< std::endl;
	std::cout << "Darkest secret: " << this->_darkestSecret << std::endl;
	std::cout << std::endl;
}

std::string Contact::_cutString(std::string field)
{
	if (field.length() > 10)
		return (field.substr(0, 9) + ".");
	else
		return (field);
}

void Contact::listContact(void)
{
	std::cout << std::setw(10) << _index << "|";
	std::cout << std::setw(10) << _cutString(this->_firstName) << "|";
	std::cout << std::setw(10) << _cutString(this->_lastName) << "|";
	std::cout << std::setw(10) << _cutString(this->_nickname) << std::endl;
}
