/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaboulaza <zaboulaza@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 15:03:05 by zaboulaza         #+#    #+#             */
/*   Updated: 2025/12/29 17:51:59 by zaboulaza        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

template<typename T>
typename T::iterator easyfind(T& contener, int value){
    if (find(contener.begin(), contener.end(), value) == contener.end())
        std::cout << "value not found in vector" << std::endl;
    return (find(contener.begin(), contener.end(), value));
}
