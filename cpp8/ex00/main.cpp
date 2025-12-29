/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaboulaza <zaboulaza@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 15:03:00 by zaboulaza         #+#    #+#             */
/*   Updated: 2025/12/29 18:18:30 by zaboulaza        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(){

    std::vector<int>           vec_int;
    std::vector<int>::iterator vec_int_pos;
    
    vec_int.push_back(12);
    vec_int.push_back(24);
    vec_int.push_back(35);
    vec_int.push_back(41);

    vec_int_pos = easyfind(vec_int, 35);
    if(vec_int_pos != vec_int.end()){
        std::cout << "find ---> " << *vec_int_pos << std::endl;
    }

    std::string str = "kabyle one";
    std::string::iterator vec_string_pos;
    
    vec_string_pos = easyfind(str, 'b');
    if(vec_string_pos != str.end()){
        std::cout << "find ---> " << *vec_string_pos << std::endl;
    }
    
    return(1);
}
