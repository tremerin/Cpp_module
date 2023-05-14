// ************************************************************************** //
//                                                                            //
//                Account.cpp for GlobalBanksters United                //
//                Created on  : Thu Nov 20 19:43:15 1989                      //
//                Last update : Wed Jan 04 14:54:06 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

//constructor y destructor
Account::Account(int initial_deposit)
{
	_nbAccounts++;
	_accountIndex = _nbAccounts - 1;
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	this->_displayTimestamp();
	std::cout << "index:"  << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "created" << std::endl;
}

Account::~Account(void)
{
	_nbAccounts--;
	this->_displayTimestamp();
	std::cout << "index"   << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "closed"  << std::endl;
}

//inicializar las variables estaticas, no usar static
int Account::_nbAccounts = 0;
int Account::_totalAmount= 0;
int Account::_totalNbDeposits= 0;
int Account::_totalNbWithdrawals = 0;

//geters, no usar static
int Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

/* info general de todas la cuentas */
void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:"    << getNbAccounts()    << ";";
	std::cout << "total:"       << getTotalAmount()   << ";";
	std::cout << "deposits:"    << getNbDeposits()    << ";";
	std::cout << "withdrawals:" << getNbWithdrawals() << std::endl;
}


void Account::makeDeposit(int deposit)
{
	this->_displayTimestamp();
	_nbDeposits++;
	_totalNbDeposits++;
	_totalAmount += deposit;
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";";
	_amount += deposit;
	std::cout << "deposit:" << deposit << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "nb_deposit:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	this->_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "p_amount:" << _amount << ";";
    std::cout << "withdrawal:";
    if (withdrawal > checkAmount()) {
        std::cout << "refused" << std::endl;
        return false;
    }
	else
	{
		std::cout << withdrawal << ";" << std::flush;
    	_nbWithdrawals++;
    	_totalNbWithdrawals++;
    	_totalAmount -= withdrawal;
    	_amount -= withdrawal;
    	std::cout << "amount:" << _amount << ";";
    	std::cout << "nb_deposit:" << _nbDeposits << std::endl;
	}
    return true;
}

int Account::checkAmount(void) const
{
	return (_amount);
}

/* info de una cuenta */
void Account::displayStatus(void) const
{
	this->_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::_displayTimestamp()
{
	std::time_t timeNow;
	
	timeNow = std::time(NULL);
	std::cout << std::setfill('0');
	std::cout << "[" << 1900 + std::localtime(&timeNow)->tm_year;
	std::cout << std::setw(2) << std::localtime(&timeNow)->tm_mon + 1;
	std::cout << std::setw(2) << std::localtime(&timeNow)->tm_mday;
	std::cout << "_";
	std::cout << std::setw(2) << std::localtime(&timeNow)->tm_hour;
	std::cout << std::setw(2) << std::localtime(&timeNow)->tm_min;
	std::cout << std::setw(2) << std::localtime(&timeNow)->tm_sec; 
	std::cout << "] ";
}