/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaboulaza <zaboulaza@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 21:07:20 by zaboulaza         #+#    #+#             */
/*   Updated: 2025/12/01 23:18:25 by zaboulaza        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("toto_clap_name") {
    std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string name) : ClapTrap("toto_clap_name") {
    std::cout << "DiamondTrap constructor name called" << std::endl;
    
    this->_name = name;
    this->_Hit = FragTrap::_Hit;
    this->_Energy = ScavTrap::_Energy;
    this->_Attack = FragTrap::_Attack;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap destructor called" << std::endl;
}

void DiamondTrap::whoAmI(){
    std::cout << "DiamondTrap whoAmI" << std::endl;

    std::cout << "my name is " << this->_name << " name of ClapTrap " << ClapTrap::_name << std::endl;
}

void DiamondTrap::attack(const std::string target){
    ScavTrap::attack(target);    
}
