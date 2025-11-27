/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 02:04:18 by nsmail            #+#    #+#             */
/*   Updated: 2025/11/27 03:50:06 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
    
    Fixed           c(4);
    Fixed const     d(10);
    c = (c + d);
    std::cout << "this is + ---> " << c.getRawBits() << std::endl;

    Fixed           e(4);
    Fixed const     f(10);
    e = (e - f);
    std::cout << "this is - ---> " << e.getRawBits() << std::endl;

    Fixed           g(4);
    Fixed const     h(10);
    g = (g * h);
    std::cout << "this is * ---> " << g.getRawBits() << std::endl;

    Fixed           i(4);
    Fixed const     j(2);
    i = (i / j);
    std::cout << "this is * ---> " << i.getRawBits() << std::endl;

    
    // Fixed const     b( Fixed( 5.05f ) * Fixed( 2 ) );
    
    // std::cout << a << std::endl;
    // std::cout << ++a << std::endl;
    // std::cout << a << std::endl;
    // std::cout << a++ << std::endl;
    // std::cout << a << std::endl;
    
    // std::cout << b << std::endl;
    
    // std::cout << Fixed::max( a, b ) << std::endl;
    
    return 0;
}
