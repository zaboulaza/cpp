/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaboulaza <zaboulaza@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 01:31:46 by zaboulaza         #+#    #+#             */
/*   Updated: 2025/11/25 06:01:52 by zaboulaza        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
    setRawBits(0);
    std::cout << "Defaut constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed){
    
    std::cout << "Copy constructor called" << std::endl;
    this->_fixed_point = fixed.getRawBits();
    return;
}

Fixed &Fixed::operator=(const Fixed &fixed){

    std::cout << "Copy assigment operator called" << std::endl;
    if (this != &fixed)
        this->_fixed_point = fixed.getRawBits();
    return *this;
}

Fixed::~Fixed(){
    
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const{
    std::cout << "getRawBits menber function called" << std::endl;
    return (this->_fixed_point);
}

void Fixed::setRawBits(int const raw){
    _fixed_point = raw;
}
