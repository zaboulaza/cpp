/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 18:01:04 by nsmail            #+#    #+#             */
/*   Updated: 2025/12/27 22:43:43 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void increment(int &i){
    i++;
}

void print(const int &i){
    std::cout << "print function : " << i << std::endl;
}

void print_char(std::string &str){
    std::cout << str << std::endl;
}

int main(){
    
    int tab[] = {1, 2, 3, 4};
    
    std::cout << "befor increment :" << std::endl;
    for (int i = 0; i < 4; i++){
        std::cout << "iter [" << i << "] = " << tab[i] << std::endl;
    }
    ::iter(tab, 4, increment);
    std::cout << "after increment : " << std::endl;
    for (int i = 0; i < 4; i++){
        std::cout << "iter [" << i << "] = " << tab[i] << std::endl;
    }
    std::cout << std::endl;

    int tab1[] = {20, 25, 30, 40};

    ::iter(tab1, 4, print);
    std::cout << std::endl;
    
    std::string tab2[] = {"aaa", "bbb", "ccc"};

    ::iter(tab2, 3, print_char);
    
    return(1);
}