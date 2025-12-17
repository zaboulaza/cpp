/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 15:52:10 by nsmail            #+#    #+#             */
/*   Updated: 2025/12/17 16:20:14 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){
    std::cout << "constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat(){
    std::cout << "destructor called " << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &bur){
    std::cout << "cpy constructor called" << std::endl;
    *this = bur;
}

Bureaucrat::Bureaucrat(const std::string name, int i): _name(name){
    std::cout << "bur constructor called" << std::endl;
    if (i < 1)
        throw ToLow();
    else if (i > 150)
        throw ToHight();
    this->_range = i;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &bur){
    if (this != &bur){
        this->_range = bur._range;
    }
    return *this;
}

const std::string Bureaucrat::getName() const{
    return(this->_name);
}

int Bureaucrat::getGrade() const{
    return(this->_range);
}

void Bureaucrat::increment(){
    this->_range++;
    if (_range < 1)
        throw ToLow();
    else if (_range > 150)
        throw ToHight();
}

void Bureaucrat::decrement(){
    this->_range--;
    if (_range < 1)
        throw ToLow();
    else if (_range > 150)
        throw ToHight();
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bur){
    return(out << bur.getName() << ", Bureaucrat grade " << bur.getGrade() << "." << std::endl);
}