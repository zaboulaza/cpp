/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cpp_test.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaboulaza <zaboulaza@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 17:15:32 by nsmail            #+#    #+#             */
/*   Updated: 2025/11/25 03:06:49 by zaboulaza        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream> 

int main()
{
    std::string str = "adsfadsfadsf";
    std::string *str2 = &str;
    std::string &str3 = str;

    std::cout << "str --->  " << &str << "   content = " << str << std::endl;
    std::cout << "str2 ---> " << str2 << "   content = " << *str2 << std::endl;
    std::cout << "str3 ---> " << &str3 << "   content = " << str3 << std::endl;
    
    *str2 = "test";
    
    std::cout << std::endl;
    std::cout << "str --->  " << &str << "   content = " << str << std::endl;
    std::cout << "str2 ---> " << str2 << "   content = " << *str2 << std::endl;
    std::cout << "str3 ---> " << &str3 << "   content = " << str3 << std::endl;

}
