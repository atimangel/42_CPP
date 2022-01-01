/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 16:51:41 by snpark            #+#    #+#             */
/*   Updated: 2022/01/01 11:22:46 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <iomanip>
#include <iostream>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
	: _accountIndex( _nbAccounts ),
	_amount( initial_deposit ),
	_nbDeposits(0),
	_nbWithdrawals(0)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ';'
		<< "amount:" << _amount << ';'
		<< "created" << std::endl;
	++_nbAccounts;
	_totalAmount += initial_deposit;
}

Account::Account( void )
{
}

Account::~Account( void )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ';'
		<< "amount:" << _amount << ';'
		<< "closed" << std::endl;
}

int	Account::getNbAccounts( void )
{
	return _nbAccounts;
}

int	Account::getTotalAmount( void )
{
	return _totalAmount;
}

int	Account::getNbDeposits( void )
{
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void )
{
	return _totalNbWithdrawals;
}

void Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout
		<< "accounts:" << getNbAccounts() << ';'
		<< "total:" << getTotalAmount() << ';'
		<< "deposits:" << getNbDeposits() << ';'
		<< "withdrawals:" << getNbWithdrawals() << std::endl; 
}

void	Account::makeDeposit( int deposit )
{
	_amount += deposit;
	_totalAmount += deposit;
	++_nbDeposits;
	++_totalNbDeposits;
	_displayTimestamp();
	std::cout
		<< "index:" << _accountIndex << ';'
		<< "p_amount:" << (_amount - deposit) << ';'
		<< "deposit:" << deposit << ';'
		<< "amount:" << _amount << ';'
		<< "nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout
		<< "index:" << _accountIndex << ';'
		<< "p_amount:" << _amount << ';';
	if (withdrawal > _amount)
	{
		std::cout << "withdrawal:" << "refused" << std::endl;
		return false;
	}
	else
	{
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		++_nbWithdrawals;
		++_totalNbWithdrawals;
		std::cout
			<< "withdrawal:" << withdrawal << ';'
			<< "amount:" << _amount << ';'
			<< "nb_withdrawals:" << _nbWithdrawals << std::endl;
		return true;
	}
	return false;
}

int		Account::checkAmount( void )	const
{
	return _amount;
}

void	Account::displayStatus( void )	const
{
	_displayTimestamp();
	std::cout
		<< "index:" << _accountIndex << ';'
		<< "amount:" << _amount << ';'
		<< "deposits:" << _nbDeposits << ';'
		<< "withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void )
{
	std::time_t tt = std::time(nullptr);
	std::tm tm = *std::localtime(&tt);

	std::cout << '[' << std::put_time(&tm, "%G%m%d_%H%M%S") << "] ";
}
