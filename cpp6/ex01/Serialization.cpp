/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 17:47:06 by zaboulaza         #+#    #+#             */
/*   Updated: 2025/12/24 15:01:01 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

// Serializer::Serializer(const Serializer &Serializer){
//     *this = Serializer;
// }

// Serializer &Serializer::operator=(const Serializer &Serializer){
//     (void)Serializer;
//     return (*this);
// }

uintptr_t Serializer::serialize(Data *ptr){
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data *Serializer::deserialize(uintptr_t raw){
    return (reinterpret_cast<Data *>(raw));
}