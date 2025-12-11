/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cpp_test.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 17:15:32 by nsmail            #+#    #+#             */
/*   Updated: 2025/11/28 01:40:05 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream> 
#include <cmath>

int main(){
    // int nb = 10 * 256;
    // int nb = 50 << 8;
    // float ff;
    // ff = (float)nb / 256;
    // std::cout << ff << std::endl;

    float ff = 5.05f;
    // int nb = round(ff * std::pow(2, 8));
    int nb = roundf(ff * (1 << 8));
    // ff = (float)(nb / std::pow(2, 8));
    ff = (float)nb / 256;
    // float ff = (float)nb / 256;
    std::cout << ff * 2<< std::endl;
    // float f = 42.42f;
    // f = roundf(f);
    // std::cout << f << std::endl;
    //    bits(nb);
   return 0;
}