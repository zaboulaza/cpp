/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 22:38:35 by nsmail            #+#    #+#             */
/*   Updated: 2025/11/19 22:57:42 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(){

    std::string hi = "HI THIS IS BRAIN";
    std::string *stringPTR = &hi;
    std::string &stringREF = hi;

    std::cout << "memory address" << std::endl;
    std::cout << std::endl;
    
    std::cout << "hi ---> " << &hi << std::endl;
    std::cout << "stringPTR ---> " << stringPTR << std::endl;
    std::cout << "stringREF ---> " << &stringREF << std::endl;

    std::cout << std::endl;
    std::cout << "value" << std::endl;
    std::cout << std::endl;
    
    std::cout << "hi ---> " << hi << std::endl;
    std::cout << "stringPTR ---> " << *stringPTR << std::endl;
    std::cout << "stringREF ---> " << stringREF << std::endl;
    
    return (1);
}
