/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-r <fgalan-r@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 18:03:58 by fgalan-r          #+#    #+#             */
/*   Updated: 2023/05/12 18:07:00 by fgalan-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <cstdlib>

class Contact
{
private:
    std::string _firstName;
    std::string _lastName;
    std::string _nickname;
    std::string _phoneNumber;
    std::string _darkestSecret;
    int         _index;

    std::string _fillField(std::string field);
    std::string _cutString(std::string field);

public:
    Contact();
    ~Contact();
    void setIndex(int i);
    void createContact();
    void viewContact() const;
    void listContact();
};

#endif
