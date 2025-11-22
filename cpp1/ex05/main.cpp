/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 05:35:33 by nsmail            #+#    #+#             */
/*   Updated: 2025/11/22 21:25:48 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <string>

int main(void){

    std::string level;
    Harl harl;
    
    while (1){
        std::cout << "please enter CMD betwin this :" << std::endl;
        std::cout << "              DEBUG" << std::endl;
        std::cout << "              INFO" << std::endl;
        std::cout << "              WARNING" << std::endl;
        std::cout << "              ERROR" << std::endl;
        std::cout << "              EXIT" << std::endl;
        
        if (!getline(std::cin, level)){
            std::cout << "EXIT" << std::endl;
            return(0);
        }
        if (level == "EXIT"){
            return(0);
        }
        harl.complain(level);
    }
    return(1);
}
