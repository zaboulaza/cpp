/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBookUtils2.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 13:35:12 by nsmail            #+#    #+#             */
/*   Updated: 2025/11/13 18:45:35 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook_Contact.class.hpp"
#include <iostream> 
#include <string>

int PhoneBook::isalpha(std::string alpha)
{
    if (!(alpha[0] >= 'A' && alpha[0] <= 'Z'))
        return (2);
    for(int j = 1; alpha[j]; j++)
    {
        if (!(alpha[j] >= 'a' && alpha[j] <= 'z'))
            return (0);
    }
    return (1);
}

int PhoneBook::isnumber(std::string nb){

    for(int j = 0; nb[j]; j++)
    {
        if (!(nb[j] >= '0' && nb[j] <= '9'))
            return (0);
    }
    return (1);
}

void Contact::set_first_name(std::string fname){
    
    first_name = fname;
    return;
}

void Contact::set_last_name(std::string lname){

    last_name = lname;
    return;
}

void Contact::set_nickname(std::string nickname_){
    
    nickname = nickname_;
    return;
}

void Contact::set_phone_number(std::string phone_number_){

    phone_number = phone_number_;
    return;
}

void Contact::set_darkest_secret(std::string secret){

    darkest_secret = secret;
    return;
}
