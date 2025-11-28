/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed_operator.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 02:54:01 by nsmail            #+#    #+#             */
/*   Updated: 2025/11/28 02:01:44 by nsmail           ###   ########.fr       */
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
    
    this->_fixed_point = this->_fixed_point * fixed._fixed_point;
    // this->_fixed_point = this->toFloat() * fixed.toFloat();
    this->_fixed_point = this->toFloat();
    return (*this);
}

Fixed &Fixed::operator/(const Fixed &fixed){
    
    this->_fixed_point = this->toFloat() / fixed.toFloat();
    return (*this);
}

int Fixed::operator>(const Fixed &fixed){
    
    if (this->toFloat() > fixed.toFloat())
        return (1);
    return (0);
}

int Fixed::operator<(const Fixed &fixed){
    
    if (this->toFloat() < fixed.toFloat())
        return (1);
    return (0);
}

int Fixed::operator>=(const Fixed &fixed){
    
    if (this->toFloat() >= fixed.toFloat())
        return (1);
    return (0);
}

int Fixed::operator<=(const Fixed &fixed){
    
    if (this->toFloat() <= fixed.toFloat())
        return (1);
    return (0);
}

int Fixed::operator==(const Fixed &fixed){
    
    if (this->toFloat() == fixed.toFloat())
        return (1);
    return (0);
}

int Fixed::operator!=(const Fixed &fixed){
    
    if (this->toFloat() != fixed.toFloat())
        return (1);
    return (0);
}

Fixed &Fixed::operator++(){
    ++this->_fixed_point;
    return (*this);
}

Fixed Fixed::operator++(int) {
    
    Fixed cpy = *this;
    this->_fixed_point++;
    return(cpy);
}

Fixed &Fixed::operator--(){
    --this->_fixed_point;
    return (*this);
}

Fixed Fixed::operator--(int) {
    
    Fixed cpy = *this;
    this->_fixed_point--;
    return(cpy);
}

const Fixed &Fixed::max(const Fixed &fixed1, const Fixed &fixed2){
    
    if (fixed1.getRawBits() > fixed2.getRawBits())
        return (fixed1);
    return (fixed2);
}


Fixed &Fixed::max(Fixed &fixed1, Fixed &fixed2){
    
    if (fixed1.getRawBits() > fixed2.getRawBits())
        return (fixed1);
    return (fixed2);
}