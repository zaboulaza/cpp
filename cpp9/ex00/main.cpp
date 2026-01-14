/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaboulaza <zaboulaza@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 14:46:10 by zaboulaza         #+#    #+#             */
/*   Updated: 2026/01/14 23:05:05 by zaboulaza        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av){

    if (ac != 2){
        if (ac > 2)
            std::cout << "Error : Need only one parameter " << std::endl;
        else
            std::cout << "Error : Need one parameter " << std::endl;
        return (0);
    }

    BitcoinExchange btc;

    std::ifstream ifs;
    ifs.open("data.csv", std::ifstream::in);
    if (!ifs){
        std::cout << "Error : Can not open file ---> data.csv" << std::endl;
        return (0);
    }
    
    std::string str;
    std::map<std::string, double> map;
    
    double double_;

    while (getline(ifs, str)){
        if (btc.verif_good_format(str)){

            std::stringstream ss(str.substr(11, str.length() - 11));
            ss >> double_;
            if (ss.fail())
                continue;
            char c;
            if (ss >> c)
                continue;
            map.insert(std::make_pair(str.substr(0,10), double_));
        }
    }

    std::ifstream ifs2;
    ifs2.open("input.txt", std::ifstream::in);
    if (!ifs2){
        std::cout << "Error : Can not open file ---> input.txt" << std::endl;
        return (0);
    }
    
    std::string str2;
    std::map<std::string, double>::iterator it;
    
    while (getline(ifs2, str2)){
        if (str2 == "date | value")
            continue;
        if (btc.verif_good_format2(str2)){
            it = map.lower_bound(str2.substr(0, 10));
            
            double double_;
            std::stringstream ss(str2.substr(13, str.length() - 13));
            ss >> double_;
            
            if (it == map.begin()){
                std::cout << "Error : date is too small " << std::endl;
            }
            else if (it->first == str2.substr(0, 10)){
                std::cout << it->first << " => " << str2.substr(13, str2.length() - 13) << " = " 
                << double_ * it->second << std::endl;
            }
            else{
                it--;
                std::cout << it->first << " => " << str2.substr(13, str2.length() - 13) << " = " 
                << double_ * it->second << std::endl;
            }
        }
    }
    
    return (1);
}
