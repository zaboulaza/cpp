/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyAwesomePhoneBook.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 20:38:33 by nsmail            #+#    #+#             */
/*   Updated: 2025/11/12 20:21:44 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook_Contact.class.hpp"

int main(void)
{
    PhoneBook pb;
    std::string str;
    while(1)
    {
        std::cout << "please, enter commands --> ";
        std::getline(std::cin, str);
        pb.getcommands(str);
    }
    return (1);
}
