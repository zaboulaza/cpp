/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 02:54:35 by nsmail            #+#    #+#             */
/*   Updated: 2025/11/18 01:14:27 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int Account::_comptaccount;
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit){

    std::cout   << "[19920104_091532] " << "index:" << _nbAccounts
                << ";amount:" << initial_deposit << ";created" << std::endl;
    _totalAmount += initial_deposit;
    _nbAccounts++;
    _amount = initial_deposit;
}

Account::~Account(void){

    if (_nbAccounts == _comptaccount)
        _nbAccounts = 0;
    std::cout   << "[19920104_091532] " << "index:" << _nbAccounts
                << ";amount:" << _amount << ";closed" << std::endl;
    _nbAccounts++;
}

void Account::displayAccountsInfos(){
    
    _comptaccount = _nbAccounts;
    std::cout   << "[19920104_091532] " << "accounts:" << _comptaccount
                << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits
                << ";withdrawals:" << _totalNbWithdrawals << std::endl;
    _nbAccounts = 0;
    _totalAmount = 0;
    return;
}

void Account::displayStatus( void ) const{
    
    if (_nbAccounts == _comptaccount)
        _nbAccounts = 0;
    std::cout   << "[19920104_091532] " << "index:" << _nbAccounts
                << ";amount:" << _amount << ";deposits:" << _nbDeposits
                << ";withdrawals:" << _nbWithdrawals << std::endl;
    _nbAccounts++;
    return;
}

void Account::makeDeposit( int deposit ){
    
    if (_nbAccounts == _comptaccount)
        _nbAccounts = 0;
    _nbDeposits++;
    std::cout   << "[19920104_091532] " << "index:" << _nbAccounts
                << ";p_amount:" << _amount << ";deposit:" << deposit
                << ";amount:" << _amount + deposit << ";nb_deposits:" << _nbDeposits
                << std::endl;
    _totalNbDeposits++;
    _amount = _amount + deposit;
    _totalAmount += _amount;
    _nbAccounts++;
    return;
}

bool Account::makeWithdrawal( int withdrawal ){

    if (_nbAccounts == _comptaccount)
        _nbAccounts = 0;
    if (_amount - withdrawal < 0){
            
        std::cout   << "[19920104_091532] " << "index:" << _nbAccounts
                    << ";p_amount:" << _amount << ";withdrawal:refused"
                    << std::endl;
    }
    else{
            
        _nbWithdrawals++;
        std::cout   << "[19920104_091532] " << "index:" << _nbAccounts
                    << ";p_amount:" << _amount << ";withdrawal:" << withdrawal
                    << ";amount:" << _amount - withdrawal << ";nb_withdrawals:" << _nbWithdrawals
                    << std::endl;
        _amount = _amount - withdrawal;
        _totalNbWithdrawals++;
    }
    _totalAmount += _amount;
    _nbAccounts++;
    return true;
}
