/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 22:59:27 by nsmail            #+#    #+#             */
/*   Updated: 2025/11/21 05:18:48 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumainA.hpp"
#include "HumainB.hpp"

Weapon::Weapon(std::string type){

    this->_type = type;
    return;
}

Weapon::~Weapon(){
    
    return;
}

std::string Weapon::getType(void){

    return (this->_type);
}

void Weapon::setType(std::string type){

    this->_type = type;
    return;
}

void HumanA::attack(){

    std::cout   << this->_name << " attack with their "
                << this->_weapon.getType() << std::endl;
    return;
}

void HumanB::attack(){

    std::cout   << this->_name << " attack with their "
                << this->_weapon->getType() << std::endl;
    return;
}
