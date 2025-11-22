/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 20:41:16 by nsmail            #+#    #+#             */
/*   Updated: 2025/11/19 22:37:03 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
    
    return;
}

Zombie::~Zombie(){

    std::cout << _name << " was destroy" << std::endl;
    return;
}

void Zombie::annouce(std::string name){

    std::cout << name << " : BraiiiiiiinnnzzzZ..." << std::endl;
    return;
}

void Zombie::setName(std::string name){

    _name = name;
    return;
}

