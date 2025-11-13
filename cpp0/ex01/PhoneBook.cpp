/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 18:52:38 by nsmail            #+#    #+#             */
/*   Updated: 2025/11/13 18:49:45 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook_Contact.class.hpp"
#include <iostream>
#include <string>


void PhoneBook::addContact(void){
    
    // std::cout << "addContact called" << std::endl;
    while (1)
    {
        if (find_FirstName(new_prompt("your first name")) == 1)
            break;
    }
    while (1)
    {
        if (find_LastName(new_prompt("your last name")) == 1)
            break;
    }
    while (1)
    {
        if (find_Nickname(new_prompt("your nickname")) == 1)
            break;
    }
    while (1)
    {
        if (find_PhoneNumber(new_prompt("your phone number")) == 1)
            break;
    }
    while (1)
    {
        if (find_Secret(new_prompt("your secret")) == 1)
            break;
    }
    return;
}

void PhoneBook::searchContact(void){

    std::cout << "searchContact called" << std::endl;
    
    return;
}

int PhoneBook::getcommands(std::string str){

    std::string add = "ADD";
    std::string search = "SEARCH";
    std::string exit = "EXIT";

    if (str == exit){
        std::cout << "EXIT" << std::endl;
        return (3);
    }
    else if (str == add){
        addContact();
        i++;
        return (1);
    }
    else if (str == search)
    {
        searchContact();
        return (2);
    }
    std::cout << "none good command"<< std::endl;
    return (0);
}
