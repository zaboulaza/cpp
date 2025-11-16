/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 18:52:38 by nsmail            #+#    #+#             */
/*   Updated: 2025/11/15 21:37:43 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook_Contact.class.hpp"
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream> 


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

int PhoneBook::print_good_elem(std::string prompt){
    
    int nb;
    if (isnumber(prompt)){
        std::istringstream(prompt) >> nb;
        if (nb < 0 || nb > 9)
            return (0);
        std::cout << "[------------------------------------------]" << std::endl;
        std::cout << std::endl;
        std::cout << "First Name     --> " << contact[nb].get_first_name() << "'" << std::endl;
        std::cout << "Last Name      --> " << contact[nb].get_last_name() << "'" << std::endl;
        std::cout << "Nickname       --> " << contact[nb].get_nickname() << "'" << std::endl;
        std::cout << "Phone Number   --> " << contact[nb].get_phone_number() << "'" << std::endl;
        std::cout << "Darkest Secret --> " << contact[nb].get_darkest_secret() << "'" << std::endl;
        std::cout << std::endl;
        std::cout << "[------------------------------------------]" << std::endl;
        std::cout << std::endl;
    }
    else
        return (0);
    return (1);
}

void PhoneBook::searchContact(void){

    std::cout << " __________ __________ __________ __________" << std::endl;
    std::cout << "|Index     |First Name|Last Name |Nickname  |" << std::endl;
    std::cout << " ---------- ---------- ---------- ----------" << std::endl;
    for (int j = 0; j < 8; j++){
        std::cout << "|" << j << std::setw(10);
        std::cout << "|" << contact[j].get_first_name_ten();
        std::cout << "|" << contact[j].get_last_name_ten();
        std::cout << "|" << contact[j].get_nickname_ten() << "|" << std::endl;
        std::cout << " ---------- ---------- ---------- ----------" << std::endl;

    }
    while(1){
        if (print_good_elem(new_prompt("the number you whant to see")) == 1)
            break;
        else
            std::cout << "Please enter only number between 0 and 8" << std::endl;
    }
    return;
}

void PhoneBook::secretComand(void){

    std::cout << "[------------------------------------------]" << std::endl;
    for (int j = 0; j < 8; j++)
    {
        std::cout << std::endl;
        std::cout << "First Name      [ " << j << " ] --> '" << contact[j].get_first_name() << "'" << std::endl;
        std::cout << "Last Name       [ " << j << " ] --> '" << contact[j].get_last_name() << "'" << std::endl;
        std::cout << "Nickname        [ " << j << " ] --> '" << contact[j].get_nickname() << "'" << std::endl;
        std::cout << "Phone Number    [ " << j << " ] --> '" << contact[j].get_phone_number() << "'" << std::endl;
        std::cout << "Darkest Secret  [ " << j << " ] --> '" << contact[j].get_darkest_secret() << "'" << std::endl;
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
