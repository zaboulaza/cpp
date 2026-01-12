/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutanStack.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaboulaza <zaboulaza@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 15:03:58 by zaboulaza         #+#    #+#             */
/*   Updated: 2026/01/12 17:38:17 by zaboulaza        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include <stack>

template<typename T>
class MutantStack : public std::stack<T> {
    
    public:
    
        typedef typename std::stack<T>::container_type::iterator iterator;

        iterator begin() {
            return (this->c.begin());
        }

        iterator end() {
            return (this->c.end());
        }
    
};