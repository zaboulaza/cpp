/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaboulaza <zaboulaza@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 17:47:06 by zaboulaza         #+#    #+#             */
/*   Updated: 2025/12/23 00:43:33 by zaboulaza        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

Scalar::Scalar(const Scalar &scalar){
    *this = scalar;
}

Scalar &Scalar::operator=(const Scalar &scalar){
    (void)scalar;
    return (*this);
}

void Scalar::convert(std::string av){
    
    if (av.length() == 3 && av[0] == '\'' && av[2] == '\''){
        // faire tout les cast direct et les print
    }
    else if (av == "nan" || av == "nanf" || av == "inf" || av == "+inf"
    || av == "-inf" || av == "inff" || av == "+inff" || av == "-inff"){
        //verif le quelle est passer
    }
}
