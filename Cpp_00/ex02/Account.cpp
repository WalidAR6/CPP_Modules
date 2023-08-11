/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 20:57:10 by waraissi          #+#    #+#             */
/*   Updated: 2023/08/11 01:01:02 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account()
{
	
}

Account::Account(int initial_deposit)
{
	_accountIndex = Account::_nbAccounts;
	std::cout << "index:" << _accountIndex << ";amount:" << initial_deposit << ";created" << std::endl;
	_amount = initial_deposit;
	Account::_totalAmount += initial_deposit;
	Account::_nbAccounts++;
}

Account::~Account()
{
	
}

int Account::getNbAccounts()
{
	return (0);
}

int Account::getTotalAmount()
{
	return (0);
}

int Account::getNbDeposits()
{
	return (0);
}

int Account::getNbWithdrawals()
{
	return (0);
}

void Account::displayAccountsInfos()
{
	std::cout << "accounts:" << Account::_nbAccounts << ";total:" << Account::_totalAmount << ";deposits:" << Account::_totalNbDeposits << ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit)
{
	_nbDeposits++;
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:" << deposit << ";amount:" << _amount + deposit << ";nb_deposits:" << _nbDeposits << std::endl;
	_amount += deposit;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
}

bool Account::makeWithdrawal(int withrawal)
{
	if (_amount - withrawal > 0)
	{
		_nbWithdrawals++;
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:" << withrawal << ";amount:" << _amount - withrawal << ";nb_deposits:" << _nbWithdrawals << std::endl;
		_amount -= withrawal;
		Account::_totalAmount -= withrawal;
		Account::_totalNbWithdrawals++;
		return (true);
	}
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:refused" << std::endl;
	return (false);
}

int Account::checkAmount() const
{
	return (0);	
}

void Account::displayStatus() const
{
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::_displayTimestamp()
{
	
}
