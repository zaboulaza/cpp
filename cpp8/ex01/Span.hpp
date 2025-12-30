/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaboulaza <zaboulaza@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 18:25:20 by zaboulaza         #+#    #+#             */
/*   Updated: 2025/12/30 14:24:05 by zaboulaza        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <vector>
#include <algorithm>
#include <iostream>

class Span {

    public:

        Span() : _N(0) {};
        ~Span() {};
        Span(const Span &span);
        Span(unsigned int N);
        Span &operator=(const Span &span);

        void   addNumber(int num);
        int    shortestSpan();
        int    longestSpan();

        class TooMuchElem : public std::exception {
            const char *what() const throw(){
                return ("Had already too much element in our vector");
            }
        };
        
        class NeedMoreElem : public std::exception {
            const char *what() const throw(){
                return ("We need more elem");
            }
        };
    
    private:

        std::vector<int> tab;
        unsigned int _N;

};
