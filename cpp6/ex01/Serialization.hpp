/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 17:42:34 by zaboulaza         #+#    #+#             */
/*   Updated: 2025/12/23 22:33:00 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

typedef struct s_data{
    
} Data;

class Serializer {
    
    public :

        Serializer() {};
        ~Serializer() {};
        Serializer(Serializer &serializer);
        Serializer &operator=(const Serializer &serializer);

        static uintptr_t serialize(Data *ptr);
        static Data *deserialize(uintptr_t raw);

    private :

        
    
};
