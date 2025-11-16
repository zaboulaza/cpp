/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyAwesomePhoneBook.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 20:38:33 by nsmail            #+#    #+#             */
/*   Updated: 2025/11/15 21:21:34 by nsmail           ###   ########.fr       */
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
        if (!std::getline(std::cin, str)){
            std::cout << std::endl;
            std::cout << "EXIT" << std::endl;
            break;
        }
        else if (pb.getcommands(str) == 3){
            break;
        }
    }
    return (1);
}
