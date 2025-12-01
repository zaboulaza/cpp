/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaboulaza <zaboulaza@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 17:23:03 by zaboulaza         #+#    #+#             */
/*   Updated: 2025/12/01 19:12:33 by zaboulaza        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
    std::cout << "constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name){
    std::cout << "constructor name called" << std::endl;

    _name = name;
    _Hit = 100;
    _Energy = 50;
    _Attack = 20;
}

ClapTrap::~ClapTrap(){
    std::cout << "destructor ---> " << _name << " called" << std::endl;
}

void ClapTrap::attack(const std::string &target){
    
    if (this->_Energy <= 0)
        std::cout << this->_name << " can't attack need more energie" << std::endl;
    else {
        this->_Energy--;
        std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_Attack << " points of damage!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount){
    if (this->_Hit <= 0)
        std::cout << this->_name << " is die" << std::endl;
    else{
        this->_Hit -= amount;
        if (this->_Hit <= 0){
            std::cout << "you kill " << this->_name << std::endl;
            return;   
        }
        std::cout << this->_name << " take " << amount << " dmg" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount){
    if (this->_Hit <= 0){
        std::cout << "you reanimed " << this->_name << std::endl;
        this->_Hit += amount;
    }
    else{
        this->_Hit += amount;
        std::cout << this->_name << " have now " << this->_Hit << " hp" << std::endl;
    }
}
