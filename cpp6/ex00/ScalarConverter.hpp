/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 17:42:34 by zaboulaza         #+#    #+#             */
/*   Updated: 2025/12/23 19:27:47 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class Scalar {
    
    public :

        Scalar() {};
        ~Scalar() {};
        // Scalar(Scalar &scalar);
        // Scalar &operator=(const Scalar &scalar);
        static void convert(std::string av);
};