/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 04:52:54 by nsmail            #+#    #+#             */
/*   Updated: 2025/11/19 18:22:08 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name){

    _name = name;
    return;
}

Zombie::~Zombie(void){

    // delete Zombie;
    
    std::cout << _name << "was destroy" << std::endl;
    return;
}

void Zombie::annouce(){

    std::cout << _name << ": BraiiiiiiinnnzzzZ...";
    return;
}
