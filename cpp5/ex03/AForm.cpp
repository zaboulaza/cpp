/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaboulaza <zaboulaza@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 15:46:13 by nsmail            #+#    #+#             */
/*   Updated: 2025/12/18 06:34:14 by zaboulaza        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : _name(""), _grade_exec(150), _grade_sign(150), _signed(false){
}

AForm::~AForm(){}

AForm::AForm(const std::string name, int grade_exec, int grade_sign) : _name(name), _grade_exec(grade_exec),
                                                                     _grade_sign(grade_sign), _signed(false){
    if (grade_exec < 1 || grade_sign < 1)
        throw GradeTooHighException();
    else if (grade_sign > 150 || grade_exec > 150)
        throw GradeTooLowException();
}

AForm::AForm(const AForm &Aform) :   _name(Aform._name), _grade_exec(Aform._grade_exec),
                                 _grade_sign(Aform._grade_sign), _signed(false)
{
    *this = Aform;
}

AForm &AForm::operator=(const AForm &Aform){
    if (this != &Aform){
        this->_signed = Aform._signed;
    }
    return *this;
}

void AForm::beSigned(const Bureaucrat &bur){
    if(bur.getGrade() > this->getGrade_sign()){
        throw GradeTooLowException();
    }
    else
        this->_signed = true;
}

const std::string AForm::getName() const {
    return (this->_name);
}

int AForm::getGrade_exec() const {
    return (this->_grade_exec);
}

int AForm::getGrade_sign() const {
    return (this->_grade_sign);
}

std::ostream &operator<<(std::ostream &out, const AForm &Aform){
    out << "the AForm : " << Aform.getName() << " have a grade_exec equal to : " << Aform.getGrade_exec()
        << " and a grade_sign equal to " << Aform.getGrade_sign() << std::endl;
    return (out);
}

bool AForm::getSingned() const{
    return (this->_signed);
}