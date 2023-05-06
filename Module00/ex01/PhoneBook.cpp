#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
    std::cout << "PhoneBook class created" << std::endl;
    
}

PhoneBook::~PhoneBook(void)
{
    std::cout << "PhoneBook class destroyed" << std::endl;
}

void PhoneBook::Menu(void)
{

    std::cout << "Welcome, please choose a option" << std::endl;
    std::cin >> this->_option;
    std::cout << "Option choosen: " << this->_option << std::endl;
}