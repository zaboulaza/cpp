/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.getter.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 20:24:51 by nsmail            #+#    #+#             */
/*   Updated: 2025/11/14 21:22:08 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook_Contact.class.hpp"
#include <iostream>
#include <string>

std::string Contact::get_first_name(){
    
    std::string fname;
    fname = first_name;
    return (fname);
}

std::string Contact::get_first_name_ten(){
    std::string fname;
    if (first_name.length() > 10){
        fname = first_name;
        fname.resize(9);
        fname += '.';
    }
    else if (first_name.length() < 10){
        fname = first_name;
        fname.resize(10, ' ');
        // std::setw()
    }
    return (fname);
}

std::string Contact::get_last_name(){

    std::string lname;
    lname = last_name;
    return (lname);
}

std::string Contact::get_nickname(){

    std::string nkname;
    nkname = nickname;
    return (nkname);
}

std::string Contact::get_phone_number(){
    
    std::string ph_nb;
    ph_nb = phone_number;
    return (ph_nb);
}

std::string Contact::get_darkest_secret(){

    std::string secret;
    secret = darkest_secret;
    return (secret);
}
