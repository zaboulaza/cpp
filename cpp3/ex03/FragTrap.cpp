/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaboulaza <zaboulaza@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 20:47:23 by zaboulaza         #+#    #+#             */
/*   Updated: 2025/12/01 21:00:35 by zaboulaza        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(){
    std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string name){
    std::cout << "FragTrap constructor name called" << std::endl;

    this->_name = name;
    this->_Attack = 30;
    this->_Energy = 100;
    this->_Hit = 100;
}

FragTrap::~FragTrap(){
    std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys(){
    std::cout << "FragTrap highFivesGuys called" << std::endl;
}
