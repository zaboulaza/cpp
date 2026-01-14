/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaboulaza <zaboulaza@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 14:46:28 by zaboulaza         #+#    #+#             */
/*   Updated: 2026/01/14 23:02:37 by zaboulaza        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include <stack>
#include <fstream>
#include <map>
#include <sstream>

class BitcoinExchange {
  
    public :
    
        BitcoinExchange() {};
        ~BitcoinExchange() {};
        BitcoinExchange(const BitcoinExchange &btc);
        BitcoinExchange &operator=(const BitcoinExchange &btc);
        int verif_good_format(std::string str);
        int verif_good_format2(std::string str);
        int first_verif(std::string str);
    
    private :

    
};
