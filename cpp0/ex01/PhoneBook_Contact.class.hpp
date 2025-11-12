/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook_Contact.class.hpp                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 20:43:33 by nsmail            #+#    #+#             */
/*   Updated: 2025/11/12 20:22:52 by nsmail           ###   ########.fr       */
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
        int phone_number;
        std::string darkest_secret;

};

class PhoneBook {
    private:
        Contact contact[8];
    
    public:
    void addContact(void);
    void searchContact(void);
    int getcommands(std::string str);
};
// std::cin "Hello World"
// std::getine()