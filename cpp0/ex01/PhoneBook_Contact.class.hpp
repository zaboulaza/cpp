/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook_Contact.class.hpp                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 20:43:33 by nsmail            #+#    #+#             */
/*   Updated: 2025/11/15 20:47:32 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Contact {

    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;

    public:
        void        set_first_name(std::string fname);
        void        set_last_name(std::string lname);
        void        set_nickname(std::string nickname_);
        void        set_phone_number(std::string phone_number_);
        void        set_darkest_secret(std::string secret);

        std::string get_first_name(void);
        std::string get_last_name(void);
        std::string get_nickname(void);
        std::string get_phone_number(void);
        std::string get_darkest_secret(void);

        std::string get_first_name_ten(void);
        std::string get_last_name_ten(void);
        std::string get_nickname_ten(void);
};

class PhoneBook {
    private:
        Contact     contact[8];
        
    public:
        void        addContact(void);
        void        searchContact(void);
        void        secretComand(void);
        
        int         getcommands(std::string str);
        int         find_FirstName(std::string fname);
        int         find_LastName(std::string lname);
        int         find_Nickname(std::string nickname);
        int         find_PhoneNumber(std::string phone_number);
        int         find_Secret(std::string secret);
        
        int         isalpha(std::string alpha);
        int         isnumber(std::string nb);
        int         i;
        
    std::string     new_prompt(std::string prompt);
    int            print_good_elem(std::string prompt);
};
// std::cin "Hello World";
// std::getine();