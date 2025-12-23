/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 17:42:29 by zaboulaza         #+#    #+#             */
/*   Updated: 2025/12/23 16:39:04 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av){
    
    if(ac != 2){
        std::cout << "Error : you need to put one arg" << std::endl;
        return (0);
    }
    
    Scalar::convert(av[1]);
    
    return (1);
}
