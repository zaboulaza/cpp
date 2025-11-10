/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 21:41:37 by nsmail            #+#    #+#             */
/*   Updated: 2025/11/10 22:57:40 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "test.hpp"

Sample::Sample(void){
    std::cout << "Constructor called" << std::endl;
    x = 10;
    return;
}

Sample::Sample(int value){
    std::cout << "parameter Constructor called" << std::endl;
    x = value;
    return;
}

Sample::~Sample(void){
    std::cout << "Destructor called for instance whose value is " << x << std::endl;
    return;
}