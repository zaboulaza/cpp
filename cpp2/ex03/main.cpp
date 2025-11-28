/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 02:04:18 by nsmail            #+#    #+#             */
/*   Updated: 2025/11/28 01:48:56 by nsmail           ###   ########.fr       */
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
    std::cout << "this is * ---> " << g.toInt() << std::endl;

    Fixed           i(4);
    Fixed const     j(2);
    i = (i / j);
    std::cout << "this is * ---> " << i.getRawBits() << std::endl;

    Fixed           k(4);
    Fixed const     l(2);
    if (k > l)
        std::cout << "it work" << std::endl;
    else
        std::cout << "it did'nt work" << std::endl;

    Fixed           m(2);
    Fixed const     n(4);
    if (m < n)
        std::cout << "it work" << std::endl;
    else
        std::cout << "it did'nt work" << std::endl;

    Fixed           o(5);
    Fixed const     p(4);
    if (o >= p)
        std::cout << "it work" << std::endl;
    else
        std::cout << "it did'nt work" << std::endl;

    Fixed           q(2);
    Fixed const     r(4);
    if (q <= r)
        std::cout << "it work" << std::endl;
    else
        std::cout << "it did'nt work" << std::endl;

    Fixed           s(2);
    Fixed const     t(2);
    if (s == t)
        std::cout << "it work" << std::endl;
    else
        std::cout << "it did'nt work" << std::endl;

    Fixed           u(4);
    Fixed const     v(2);
    if (u != v)
        std::cout << "it work" << std::endl;
    else
        std::cout << "it did'nt work" << std::endl;

    Fixed           w;
    
    std::cout << w << std::endl;
    std::cout << --w << std::endl;
    std::cout << w << std::endl;
    std::cout << w-- << std::endl;
    std::cout << w << std::endl;
    
    Fixed           a;
    Fixed const     b( Fixed( 5.05f ) * Fixed( 2 ) );
    
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    
    std::cout << b << std::endl;
    
    std::cout << Fixed::max( a, b ) << std::endl;
    
    
    return 0;
}
