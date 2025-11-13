/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.getter.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 20:24:51 by nsmail            #+#    #+#             */
/*   Updated: 2025/11/13 21:39:11 by nsmail           ###   ########.fr       */
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

// std::string Contact::get_first_name(){
//     std::string fname;
//     fname = first_name;
//     if (fname.length() > 10){
//         for (int j = 0; j < 9; j++)
//             fname[j] = first_name[j];
//         fname[9] = '.';
//     }
//     else if (fname.length() < 10){
//         for (int j = 0; j < 10; j++){
//             if (fname[j] == '\0')
//                 fname[j] = ' ';
//         }
//     }
//     fname[10] = '\0';
//     return (fname);
// }

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
