/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 21:18:52 by nsmail            #+#    #+#             */
/*   Updated: 2025/11/22 21:42:34 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av){

    if (ac != 2){
        std::cout << "You need tu enter 2 params" << std::endl;
        return(0);
    }
    Harl harl;
    
    harl.complain(av[1]);
    return(1);
}

