/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaboulaza <zaboulaza@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 17:42:34 by zaboulaza         #+#    #+#             */
/*   Updated: 2025/12/22 23:24:46 by zaboulaza        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class Scalar {
    
    public :

        Scalar() {};
        ~Scalar() {};
        Scalar(Scalar &scalar);
        Scalar &operator=(const Scalar &scalar);

        void convert(std::string av);

};