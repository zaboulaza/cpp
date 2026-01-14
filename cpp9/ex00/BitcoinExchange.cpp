/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaboulaza <zaboulaza@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 14:46:21 by zaboulaza         #+#    #+#             */
/*   Updated: 2026/01/14 23:09:17 by zaboulaza        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(const BitcoinExchange &btc){
    *this = btc;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &btc){
    if (this != &btc)
        int i = 0;
   return (*this);
}

int BitcoinExchange::verif_good_format(std::string str){

    if(!first_verif(str.substr(0,10)))
        return (0);
    if(str[10] != ',')
        return (0);
    return (1);
}

int BitcoinExchange::first_verif(std::string str){
    
    bool isNumber = true;

    for (int i = 0; i < 4; i++){
        if (!(str[i] >= '0' && str[i] <= '9'))
            isNumber = false;
    }
    if (str[4] != '-')
        isNumber = false;
    for (int i = 5; i < 7; i++){
        if (!(str[i] >= '0' && str[i] <= '9'))
            isNumber = false;
    }
    if (str[7] != '-')
        isNumber = false;
    for(int i = 8; i < 10; i++){
        if (!(str[i] >= '0' && str[i] <= '9'))
            isNumber = false;
    }
    if (isNumber == false)
        return (0);
    return (1);
}

int BitcoinExchange::verif_good_format2(std::string str){

    if (!first_verif(str.substr(0,10))){
        std::cout << "Error : Wrong date ---> YYYY-MM-DD " << std::endl;
        return (0);
    }
    if (str.length() < 14 || str.substr(10, 3) != " | "){
        std::cout << "Error : bad input => " << str << std::endl;
        return (0);
    }
    
    double double_;
    std::stringstream ss(str.substr(13, str.length() - 13));
    
    ss >> double_;
    if (ss.fail()){
        std::cout << "Error : bad input => " << str << std::endl;
        return (0);
    }
    char c;
    if (ss >> c){
        std::cout << "Error : bad input => " << str << std::endl;
        return (0);
    }
    if (double_ < 0){
        std::cout << "Error : not a positive number ." << std::endl;
        return (0);
    }
    if (double_ > 1000){
        std::cout << "Error : too large a number ." << std::endl; 
        return (0);
    }
    return (1);
}
