/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaboulaza <zaboulaza@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 18:24:46 by zaboulaza         #+#    #+#             */
/*   Updated: 2025/12/30 14:40:14 by zaboulaza        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(){
    
    Span sp(4);
    Span crash(4);
    
    try{    
        sp.addNumber(10);
        sp.addNumber(3);
        sp.addNumber(20);
        sp.addNumber(21);
        std::cout << "The shortestSpan is : " <<  sp.shortestSpan() << std::endl;
        std::cout << "The longestSpan is : " <<  sp.longestSpan() << std::endl;
        sp.addNumber(15);
    }
    catch (std::exception &e){
        std::cout << "Error : " << e.what() << std::endl;
    }
    
    try{    
        crash.addNumber(10);
        int nb = crash.shortestSpan();
        std::cout << "The shortestSpan is : " <<  nb << std::endl;
        crash.addNumber(15);
    }
    catch (std::exception &e){
        std::cout << "Error : " << e.what() << std::endl;
    }
    return(1);
}
