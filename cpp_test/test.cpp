/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 21:41:37 by nsmail            #+#    #+#             */
/*   Updated: 2025/11/12 19:33:07 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "test.hpp"

Sample::Sample(int nb) : _foo(nb){
    std::cout << "Constructor called" << std::endl;
    return;
}

Sample::~Sample(void){
    std::cout << "Destructor called" << std::endl;
    return;
}

int Sample::getfoo(void) const{
    std::cout << "getfoo == " << this->_foo << std::endl;
    return this->_foo;
}

int Sample::compare(Sample *other) const{
    std::cout << "fonction compare call" << std::endl;
    std::cout << "compare " << other << std::endl;
    if (this->_foo < other->getfoo())
        return (-1);
    else if (this->_foo > other->getfoo())
        return (1);
    return (0);
}
