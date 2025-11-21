/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 23:00:42 by nsmail            #+#    #+#             */
/*   Updated: 2025/11/21 05:20:18 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumainA.hpp"
#include "HumainB.hpp"

HumanB::HumanB(std::string name): _name(name){
}

HumanB::~HumanB(){
    
    return;
}

void HumanB::setWeapon(Weapon &weapon){
    this->_weapon = &weapon;
    return;
}
