/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 02:04:39 by nsmail            #+#    #+#             */
/*   Updated: 2025/11/27 01:12:59 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
    setRawBits(0);
    std::cout << "Defaut constructor called" << std::endl;
}    

Fixed::Fixed(const int nb){
    std::cout << "Int constructor called" << std::endl;
    _fixed_point = nb * 256;
}

Fixed::Fixed(const float ff){
    std::cout << "Float constructor called" << std::endl;
    _fixed_point = roundf(ff * 256);
}

Fixed::Fixed(const Fixed &fixed){
    
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
    return;
}    

Fixed &Fixed::operator=(const Fixed &fixed){

    std::cout << "Copy assigment operator called" << std::endl;
    if (this != &fixed)
        this->_fixed_point = fixed.getRawBits();
    return *this;    
}    

std::ostream &operator<<(std::ostream &out, const Fixed &fixed){
    float test = fixed.toFloat();
    return (out << test);
}

Fixed::~Fixed(){
    
    std::cout << "Destructor called" << std::endl;
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
