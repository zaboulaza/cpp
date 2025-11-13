/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyAwesomePhoneBook.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 20:38:33 by nsmail            #+#    #+#             */
/*   Updated: 2025/11/13 18:09:26 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook_Contact.class.hpp"

int main(void)
{
    PhoneBook pb;
    std::string str;
    pb.i = 0;
    while(1)
    {
        if (pb.i >= 8)
            pb.i = 0;
        std::cout << "please, enter commands --> ";
        std::getline(std::cin, str);
        if (pb.getcommands(str) == 3){
            break;
        }
    }
    return (1);
}
