/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 05:11:52 by nsmail            #+#    #+#             */
/*   Updated: 2025/12/21 13:15:00 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <string>

void Harl::debug(void){
    
    std::cout << std::endl;
    std::cout << "DEBUG line" << std::endl;
    std::cout << std::endl;
    return;
}

void Harl::info(void){
    
    std::cout << std::endl;
    std::cout << "INFO line" << std::endl;
    std::cout << std::endl;
    return;
}

void Harl::warning(void){
    
    std::cout << std::endl;
    std::cout << "WARNING line" << std::endl;
    std::cout << std::endl;
    return;
}

void Harl::error(void){
    
    std::cout << std::endl;
    std::cout << "ERROR line" << std::endl;
    std::cout << std::endl;
    return;
}

void Harl::complain(std::string level){

    Harl harl;

    std::string levels[4] = {
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR"
    };
    
    void (Harl::*action[])() = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };

    for (int i = 0; i < 4; i++){
        if (level == levels[i]){
            (harl.*action[i])();
            return;
        }
    }
    std::cout << "please enter a good command" << std::endl;
    return;
}
