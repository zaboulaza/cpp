/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 18:52:38 by nsmail            #+#    #+#             */
/*   Updated: 2025/11/12 20:42:31 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook_Contact.class.hpp"
#include <iostream>
#include <string>


void PhoneBook::addContact(void){
    
    std::cout << "addContact called" << std::endl;
    // for (int i = 0; i < 6)
    return;
}

void PhoneBook::searchContact(void){

    std::cout << "searchContact called" << std::endl;
    
    return;
}

int PhoneBook::getcommands(std::string str){

    std::cout << "getcommands called" << std::endl;
    std::string add = "ADD";
    std::string search = "SEARCH";
    std::string exit = "EXIT";

    if (str == add){
        std::cout << "Find --> " << str << std::endl;
        addContact();
        return (1);
    }
    else if (str == search)
    {
        std::cout << "Find --> " << str << std::endl;
        searchContact();
        return (2);
    }
    else if (str == exit)
    {
        std::cout << "Find --> " << str << std::endl;
        return (3);
    }
    std::cout << "none good command"<< std::endl;
    return (0);
}
