/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBookUtils.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 11:34:38 by nsmail            #+#    #+#             */
/*   Updated: 2025/11/13 19:56:25 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook_Contact.class.hpp"
#include <iostream>
#include <string>


std::string PhoneBook::new_prompt(std::string prompt){
    
    // std::cout << "new_prompt called" << std::endl;
    std::string result;
    
    std::cout << "please enter " << prompt << " --> ";
    std::getline(std::cin, result);
    
    return (result);
}

int PhoneBook::find_FirstName(std::string fname){
    
    // std::cout << "find_FirstName called" << std::endl;

    if (fname.length() < 2)
    {
        std::cout << "You must enter at least 2 characters." << std::endl;
        return (0);
    }
    else if (isalpha(fname) != 1)
    {
        if (isalpha(fname) == 0)
        {
            std::cout << "Please enter only alphanumeric and lowercase characters." << std::endl;
            return(0);
        }
        else if (isalpha(fname) == 2)
        {
            std::cout << "Name must start with a Maj" << std::endl;
            return (0);
        }
    }
    else
    {
        contact[i].set_first_name(fname);
    }
    return (1);
}

int PhoneBook::find_LastName(std::string lname){
    
    if (lname.length() < 2){
        std::cout << "you must enter at least 2 characters." << std::endl;
        return (0);
    }
    else if (isalpha(lname) != 1){
        if (isalpha(lname) == 0){
            std::cout << "please enter only alphanumeric and lowercase characters." << std::endl;
            return (0);
        }
        else if (isalpha(lname) == 2){
            std::cout << "Name must start with a Maj" << std::endl;
            return(0);
        }
    }
    else
        contact[i].set_last_name(lname);
    return (1);
}

int PhoneBook::find_Nickname(std::string nickname){
    
    if (nickname.length() < 2){
        std::cout << "you must enter at least 2 characters." << std::endl;
        return (0);
    }
    else if (isalpha(nickname) != 1){
        if (isalpha(nickname) == 0){
            std::cout << "please enter only alphanumeric and lowercase characters." << std::endl;
            return (0);
        }
        else if (isalpha(nickname) == 2){
            std::cout << "Name must start with a Maj" << std::endl;
            return(0);
        }
    }
    else
        contact[i].set_nickname(nickname);
    return (1);
}

int PhoneBook::find_PhoneNumber(std::string phone_number){
    
    if (phone_number.length() != 10){
        std::cout << "you must enter 10 characters" << std::endl;
        return (0);
    }
    else if (isnumber(phone_number) == 0)
    {
        std::cout << "please enter only number" << std::endl;
        return (0);
    }
    else
        contact[i].set_phone_number(phone_number);
    return (1);
}

int PhoneBook::find_Secret(std::string secret){
    
    if (secret.length() == 0){
        std::cout << "Haha, you don't have any secrets either." << std::endl;
        return (1);
    }
    else
        contact[i].set_darkest_secret(secret);
    return (1);
}
