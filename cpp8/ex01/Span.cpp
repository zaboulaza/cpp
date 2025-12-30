/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaboulaza <zaboulaza@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 18:25:05 by zaboulaza         #+#    #+#             */
/*   Updated: 2025/12/30 14:36:30 by zaboulaza        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(const Span &span){
    *this = span;
}

Span::Span(unsigned int N) : _N(N) {};

Span &Span::operator=(const Span &span){
    if(this != &span){
        this->_N = span._N;
    }
    return (*this);
}

void Span::addNumber(int num){
    if (tab.size() >= this->_N){
        throw TooMuchElem();
        return ;
    }
    tab.push_back(num);
    return;
}

int Span::shortestSpan(){
    if (this->tab.size() < 2){
        throw NeedMoreElem();
    }
    int count;
    count = abs(tab[0] - tab[1]);
    for (int i = 0; this->tab[i]; i++){
        for(int j = i + 1; this->tab[j]; j++){
            if (abs(tab[i] - tab[j]) < count )
                count = abs(tab[i] - tab[j]);
        }
    }
    return (count);
}

int Span::longestSpan(){
    if (this->tab.size() < 2){
        throw NeedMoreElem();
    }
    int count;
    count = abs(tab[0] - tab[1]);
    for (int i = 0; this->tab[i]; i++){
        for(int j = i + 1; this->tab[j]; j++){
            if (abs(tab[i] - tab[j]) > count )
                count = abs(tab[i] - tab[j]);
        }
    }
    return (count);
}
