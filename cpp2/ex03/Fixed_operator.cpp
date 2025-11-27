/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed_operator.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 02:54:01 by nsmail            #+#    #+#             */
/*   Updated: 2025/11/27 05:11:42 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed &Fixed::operator+(const Fixed &fixed){
    
    this->_fixed_point = this->toFloat() + fixed.toFloat();
    return (*this);
}

Fixed &Fixed::operator-(const Fixed &fixed){
    
    this->_fixed_point = this->toFloat() - fixed.toFloat();
    return (*this);
}

Fixed &Fixed::operator*(const Fixed &fixed){
    
    this->_fixed_point = this->toFloat() * fixed.toFloat();
    return (*this);
}

Fixed &Fixed::operator/(const Fixed &fixed){
    
    this->_fixed_point = this->toFloat() / fixed.toFloat();
    return (*this);
}

int operator>(const Fixed &fixed)