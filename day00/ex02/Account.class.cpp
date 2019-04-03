// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Account.class.cpp                                  :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/02 10:32:50 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/02 10:32:52 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Account.class.hpp"
#include <iostream>
#include <iomanip>

int Account::getNbAccounts( void ){
    return Account::_nbAccounts;
}
int	Account::getTotalAmount( void ){
    return Account::_totalAmount;
}
int	Account::getNbDeposits( void ){
    return Account::_totalNbDeposits;
}
int Account::getNbWithdrawals( void ){
    return Account::_totalNbWithdrawals;
}

Account::Account(int initial_deposit) {
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_accountIndex = Account::_nbAccounts;
	Account::_nbAccounts++;
	Account::_totalAmount += initial_deposit;
	this->_amount = initial_deposit;

	std::cout << "[";
	_displayTimestamp();
	std::cout << "] index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}

Account::~Account(void){
	std::cout << "[";
	_displayTimestamp();
	std::cout << "] index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}

static void    add_zero(int i){
    std::cout << std::setfill ('0') << std::setw (2);
    std::cout << i;
}

void	Account::_displayTimestamp( void ) {
	time_t	timev = time(&timev);
	struct tm *stamp = localtime(&timev);

    std::cout << (1900 + stamp->tm_year);
    add_zero(stamp->tm_mon + 1);
    add_zero(stamp->tm_mday);
  	std::cout << "_";
    add_zero(stamp->tm_hour);
    add_zero(stamp->tm_min);
    add_zero(stamp->tm_sec);
}

void	Account::displayAccountsInfos(void)
{
	std::cout << "[";
	_displayTimestamp();
	std::cout <<
        "] accounts:" << _nbAccounts <<
		";total:" << _totalAmount <<
		";deposits:" << _totalNbDeposits <<
		";withdrawals:" << _totalNbWithdrawals <<
		std::endl;
}

void		Account::displayStatus(void) const
{
	std::cout << "[";
	_displayTimestamp();
	std::cout <<
        "] index:" << this->_accountIndex <<
		";amount:" << this->_amount <<
        ";deposits:" << this->_nbDeposits <<
		";withdrawals:" << this->_nbWithdrawals <<
        std::endl;
}

void		Account::makeDeposit(int deposit)
{
	this->_amount += deposit;
	this->_nbDeposits++;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;

	std::cout << "[";
	_displayTimestamp();
	std::cout <<
        "] index:" << this->_accountIndex <<
        ";p_amount:" << (this->_amount - deposit) << 
		";deposit:" << deposit <<
        ";amount:" << this->_amount <<
        ";nb_deposits:" << this->_nbDeposits <<
        std::endl;
}

bool		Account::makeWithdrawal(int withdrawal)
{
	std::cout << "[";
	_displayTimestamp();
	std::cout << "] index:" << this->_accountIndex 
	<< ";p_amount:" << this->_amount;

	if (this->_amount < withdrawal)
	{	
		std::cout << ";withdrawal:" << "refused" << std::endl;
		return (false);
	}
	else
	{
		Account::_totalAmount -= withdrawal;
		Account::_totalNbWithdrawals++;
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;

		std::cout <<
            ";withdrawal:" << withdrawal <<
            ";amount:" << this->_amount <<
            ";nb_withdrawals:" << this->_nbWithdrawals <<
            std::endl;
		return (true);
	}
}

int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;
