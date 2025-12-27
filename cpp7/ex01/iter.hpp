/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 18:01:00 by nsmail            #+#    #+#             */
/*   Updated: 2025/12/27 22:30:36 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

template<typename T>
void iter(T *av, const size_t i, void(*function)(const T&)){
    for (size_t j = 0; j < i; j++)
        function(av[j]);
}


template<typename T>
void iter(T *av, const size_t i, void(*function)(T&)){
    for (size_t j = 0; j < i; j++)
        function(av[j]);
}