/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 20:57:10 by waraissi          #+#    #+#             */
/*   Updated: 2023/08/11 14:31:17 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << initial_deposit << ";created" << std::endl;
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_nbAccounts++;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

int Account::getNbAccounts()
{
	return (_nbAccounts);
}

int Account::getTotalAmount()
{
	return (_totalAmount);
}

int Account::getNbDeposits()
{
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals()
{
	return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount() << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void Account::makeDeposit(int deposit)
{
	_nbDeposits++;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:" << deposit << ";amount:" << _amount + deposit << ";nb_deposits:" << _nbDeposits << std::endl;
	_amount += deposit;
	_totalAmount += deposit;
	_totalNbDeposits++;
}

bool Account::makeWithdrawal(int withrawal)
{
	_displayTimestamp();
	int	p_amount = _amount;
	_amount -= withrawal;
	if (checkAmount())
	{
		_nbWithdrawals++;
		std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount << ";withdrawal:" << withrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
		_totalAmount -= withrawal;
		_totalNbWithdrawals++;
		return (true);
	}
	_amount = p_amount;
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:refused" << std::endl;
	return (false);
}

int Account::checkAmount() const
{
	if (_amount < 0)
		return (0);
	return (1);
}

void Account::displayStatus() const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

std::string append_z(int i)
{
	if (i < 10)
		return ("0");
	return ("");
}

void Account::_displayTimestamp()
{
	time_t now = time(NULL);
	std::tm *ok = std::localtime(&now);

  	std::cout << "[" << ok->tm_year + 1900;
 	std::cout << append_z(ok->tm_mon) << ok->tm_mon;
  	std::cout << append_z(ok->tm_mday) << ok->tm_mday;
  	std::cout << "_" << append_z(ok->tm_hour) << ok->tm_hour;
  	std::cout << append_z(ok->tm_min) << ok->tm_min;
  	std::cout << append_z(ok->tm_sec) << ok->tm_sec << "] ";
}
