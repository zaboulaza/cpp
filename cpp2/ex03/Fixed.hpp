/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 02:04:29 by nsmail            #+#    #+#             */
/*   Updated: 2025/11/27 05:11:22 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma one
#include <iostream>
#include <string>
#include <cmath>

class Fixed {

    public:

        Fixed();
        Fixed(const int nb);
        Fixed(const float nb);
        Fixed(const Fixed &fixed);
        // Fixed(operator*(const Fixed &fixed));
        Fixed &operator=(const Fixed &fixed);
        ~Fixed();
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;

        Fixed &operator-(const Fixed &fixed);
        Fixed &operator+(const Fixed &fixed);
        Fixed &operator*(const Fixed &fixed);
        Fixed &operator/(const Fixed &fixed);

        
        int operator>(const Fixed &fixed);
        int operator<(const Fixed &fixed);
        int operator>=(const Fixed &fixed);
        int operator<=(const Fixed &fixed);
        int operator==(const Fixed &fixed);
        int operator!=(const Fixed &fixed);

        Fixed& operator++();        
        Fixed operator++(int);
        Fixed& operator--();        
        Fixed operator--(int);
            
    private:
    
        int _fixed_point;
        static const int _bit = 8;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);