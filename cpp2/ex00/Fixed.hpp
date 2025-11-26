/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaboulaza <zaboulaza@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 00:34:31 by zaboulaza         #+#    #+#             */
/*   Updated: 2025/11/25 06:01:37 by zaboulaza        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

class Fixed {

    public:

        Fixed();
        Fixed(const Fixed &fixed);
        Fixed &operator=(const Fixed &fixed);
        ~Fixed();
        int getRawBits(void) const;
        void setRawBits(int const raw);

    private:

        int _fixed_point;
        static const int _nb_of_fractional_bits = 8;
};
