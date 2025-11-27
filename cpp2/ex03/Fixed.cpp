/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 02:04:39 by nsmail            #+#    #+#             */
/*   Updated: 2025/11/27 03:05:06 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
    setRawBits(0);
}    

Fixed::Fixed(const int nb){
    _fixed_point = nb * 256;
}

Fixed::Fixed(const float ff){
    _fixed_point = roundf(ff * 256);
}

Fixed::Fixed(const Fixed &fixed){
    
    *this = fixed;
    return;
}    

Fixed &Fixed::operator=(const Fixed &fixed){

    if (this != &fixed)
        this->_fixed_point = fixed.getRawBits();
    return *this;    
}    

std::ostream &operator<<(std::ostream &out, const Fixed &fixed){
    float test = fixed.toFloat();
    return (out << test);
}

Fixed::~Fixed(){
    
}    

int Fixed::getRawBits() const{
    return (this->_fixed_point);
}

void Fixed::setRawBits(int const raw){
    _fixed_point = raw;
}    

float Fixed::toFloat() const{
    float test = (float)_fixed_point / 256;
    return (test);
}

int Fixed::toInt() const{
    return ((_fixed_point) / 256);
}
