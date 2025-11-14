/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 18:52:38 by nsmail            #+#    #+#             */
/*   Updated: 2025/11/14 21:16:34 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook_Contact.class.hpp"
#include <iostream>
#include <string>


void PhoneBook::addContact(void){
    
    while (1){
        if (find_FirstName(new_prompt("your first name")) == 1)
            break;
    }
    while (1){
        if (find_LastName(new_prompt("your last name")) == 1)
            break;
    }
    while (1){
        if (find_Nickname(new_prompt("your nickname")) == 1)
            break;
    }
    while (1){
        if (find_PhoneNumber(new_prompt("your phone number")) == 1)
            break;
    }
    while (1){
        if (find_Secret(new_prompt("your secret")) == 1)
            break;
    }
    return;
}

void PhoneBook::searchContact(void){

    std::cout << " __________ __________ __________ __________" << std::endl;
    std::cout << "|Index     |First Name|Last Name |Nickname  |" << std::endl;
    std::cout << " ---------- ---------- ---------- ----------" << std::endl;
    for (int j = 0; j < 8; j++){
        std::cout << i << "         ";
    }
    return;
}

void PhoneBook::secretComand(void){

    std::cout << "[------------------------------------------]" << std::endl;
    for (int j = 0; j < 8; j++)
    {
        std::cout << std::endl;
        std::cout << "First Name      [ " << j << " ] --> '" << contact[j].get_first_name_ten() << "'" << std::endl;
        std::cout << "Last Name       [ " << j << " ] --> '" << contact[j].get_last_name() << "'" << std::endl;
        std::cout << "Nickname        [ " << j << " ] --> '" << contact[j].get_nickname() << "'" << std::endl;
        std::cout << "Phone Number    [ " << j << " ] --> '" << contact[j].get_phone_number() << "'" << std::endl;
        std::cout << "Darkest Secret  [ " << j << " ] --> '" << contact[j].get_darkest_secret() << "'" << std::endl;\
        std::cout << std::endl;
        std::cout << std::endl;

    }
    std::cout << "[------------------------------------------]" << std::endl;
    return;
}

int PhoneBook::getcommands(std::string str){

    std::string add = "ADD";
    std::string search = "SEARCH";
    std::string exit = "EXIT";
    std::string secret_comand = "000a";

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
    else if (str == secret_comand)
    {
        secretComand();
        return (0);
    }
    std::cout << "none good command"<< std::endl;
    return (0);
}
