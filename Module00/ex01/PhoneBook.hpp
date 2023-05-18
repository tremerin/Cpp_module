/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 18:17:28 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/05/12 18:17:48 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	int			_searchLen;
	int			_numContacts;

	void _contactPos(void);
	void _addContact(void);
	void _searchContact(void);
	void _indexContacts(void);

public:
	PhoneBook(void);
	~PhoneBook(void);
	void menu(void);
};

#endif
