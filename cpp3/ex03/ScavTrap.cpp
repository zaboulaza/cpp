/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaboulaza <zaboulaza@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 19:12:09 by zaboulaza         #+#    #+#             */
/*   Updated: 2025/12/01 22:34:10 by zaboulaza        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
    std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name){
    std::cout << "ScavTrap constructor name called" << std::endl;
    
    this->_name = name;
    this->_Hit = 100;
    this->_Energy = 50;
    this->_Attack = 20;
}

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack(const std::string target){
    std::cout << "ScavTrap attack called" << std::endl;
    if (this->_Energy <= 0)
        std::cout << this->_name << " can't attack need more energie" << std::endl;
    else {
        this->_Energy--;
        std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_Attack << " points of damage!" << std::endl;
    }
}

void ScavTrap::guardGate(){
    std::cout << "guardGate called" << std::endl;
}