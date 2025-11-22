/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 21:27:21 by nsmail            #+#    #+#             */
/*   Updated: 2025/11/22 21:47:13 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

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

    int j = 4;
    for (int i = 0; i < 4; i++){
        if (level == levels[i]){
            j = i;
        }
    }

    switch (j){
        case 4:
            std::cout << "please enter a good command" << std::endl;
            break;
        case 0:
            debug();
        case 1:
            info();
        case 2:
            warning();
        case 3:
            error();
    }
    
    return;
}
