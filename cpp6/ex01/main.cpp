/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 17:42:29 by zaboulaza         #+#    #+#             */
/*   Updated: 2025/12/24 15:29:56 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

int main(){
    
    Data dat;

    dat.i = 23;

    Data *ptr = &dat;
    
    uintptr_t raw = Serializer::serialize(ptr);
    std::cout << raw << std::endl;

    std::cout << Serializer::deserialize(raw) << std::endl;
    
    return (1);
}
