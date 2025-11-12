/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaboulaza <zaboulaza@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 21:41:37 by nsmail            #+#    #+#             */
/*   Updated: 2025/11/11 15:47:02 by zaboulaza        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "test.hpp"

Sample::Sample(void){
    std::cout << "Constructor called" << std::endl;
    return;
}

Sample::~Sample(void){
    std::cout << "Destructor called" << std::endl;
    return;
}

void Sample::bar(void){
    std::cout << "fonction bar call" << std::endl;
    return;
}