/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 15:52:10 by nsmail            #+#    #+#             */
/*   Updated: 2025/12/21 08:45:54 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){
}

Bureaucrat::~Bureaucrat(){
}

Bureaucrat::Bureaucrat(const Bureaucrat &bur){
    *this = bur;
}

Bureaucrat::Bureaucrat(const std::string name, int i): _name(name){
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

void Bureaucrat::signAForm(AForm &Aform){
    try{   
        Aform.beSigned(*this);
        std::cout << this->getName() << " signed " << Aform.getName() << std::endl;
    }
    catch (std::exception &e){
        std::cout << this->getName() << "couldn't sign " << Aform.getName() 
                  << " because " << e.what() << std::endl;
    }
}

void Bureaucrat::executeForm(AForm const & form) const{
    form.execute(*this);
}
