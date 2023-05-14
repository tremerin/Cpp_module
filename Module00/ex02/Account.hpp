// ************************************************************************** //
//                                                                            //
//                Account.hpp for GlobalBanksters United                //
//                Created on  : Thu Nov 20 19:43:15 1989                      //
//                Last update : Wed Jan 04 14:54:06 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //


#pragma once
#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

// ************************************************************************** //
//                               Account Class                                //
// ************************************************************************** //

class Account {


public:

	typedef Account		t;

	static int	getNbAccounts( void );        //cuentas
	static int	getTotalAmount( void );       //importe
	static int	getNbDeposits( void );        //depositos
	static int	getNbWithdrawals( void );     //retiradas
	static void	displayAccountsInfos( void ); //info general de todas

	Account( int initial_deposit );
	~Account( void );

	void	makeDeposit( int deposit );        //deposita en una cuenta
	bool	makeWithdrawal( int withdrawal );  //retra de una cuenta
	int		checkAmount( void ) const;         //retorna saldo de una cuenta 
	void	displayStatus( void ) const;       //info de una cuenta


private:

	static int	_nbAccounts;
	static int	_totalAmount;
	static int	_totalNbDeposits;
	static int	_totalNbWithdrawals;

	static void	_displayTimestamp( void ); //muestra la fecha, año, mes, dia, hora, min, seg

	int				_accountIndex;
	int				_amount;
	int				_nbDeposits;
	int				_nbWithdrawals;

	Account( void );

};



// ************************************************************************** //
// vim: set ts=4 sw=4 tw=80 noexpandtab:                                      //
// -*- indent-tabs-mode:t;                                                   -*-
// -*- mode: c++-mode;                                                       -*-
// -*- fill-column: 75; comment-column: 75;                                  -*-
// ************************************************************************** //


#endif /* __ACCOUNT_H__ */
