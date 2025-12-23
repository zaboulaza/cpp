/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 17:47:06 by zaboulaza         #+#    #+#             */
/*   Updated: 2025/12/23 20:19:23 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iomanip>
#include <sstream>
#include <limits>

// Scalar::Scalar(const Scalar &scalar){
//     *this = scalar;
// }

// Scalar &Scalar::operator=(const Scalar &scalar){
//     (void)scalar;
//     return (*this);
// }

void Scalar::convert(std::string av){
    
    // std::cout << av << std::endl;
    char c = av[0];
    if (av.length() == 1 && !std::isdigit(c)){
        char c = av[0];
        std::cout << std::fixed << std::setprecision(1);
        std::cout << "char: '" << c << "'" << std::endl;
        std::cout << "int: " << static_cast<int>(c) << std::endl;
        std::cout << "float: " << static_cast<float>(c) << "f" << std::endl;
        std::cout << "double: " << static_cast<double>(c) << std::endl;
    }
    else if (av == "nan" || av == "nanf" || av == "inf" || av == "+inf"
    || av == "-inf" || av == "inff" || av == "+inff" || av == "-inff"){
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        if (av == "nanf" || av == "inff" || av == "+inff" || av == "-inff"){
            std::cout << "float: " << av << std::endl;
            std::string tmp = av;
            tmp.resize(av.length() - 1);
            std::cout << "double: " << tmp << std::endl;
        }
        else{
            std::string tmp = av;
            tmp += 'f';
            std::cout << "float: " << tmp << std::endl;
            std::cout << "double: " << av << std::endl;
        }
    }
    else{
        double d;
        if(av[av.length() - 1] == 'f'){
            av.resize(av.length() - 1);
        }
        std::stringstream ss(av);
        ss >> d;
        if (ss.fail() || !ss.eof()){
            std::cout << "Error: invalid input" << std::endl;
            return;
        }
        std::cout << std::fixed << std::setprecision(1);
        if (d >= 32 && d <= 126)
            std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;
        if (!( d > std::numeric_limits<int>::max() 
        || d < std::numeric_limits<int>::min()))
            std::cout << "int: " << static_cast<int>(d) << std::endl;
        else
            std::cout << "int: impossible" << std::endl;
        
        if (!( d > std::numeric_limits<float>::max() 
        || d < std::numeric_limits<float>::min()))
            std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
        else
            std::cout << "float: impossible" << std::endl;
        
        if (!( d > std::numeric_limits<double>::max() 
        || d < std::numeric_limits<double>::min()))
            std::cout << "double: " << d << std::endl;
        else
            std::cout << "double: impossible" << std::endl;
    }
}
