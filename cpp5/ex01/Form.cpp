/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaboulaza <zaboulaza@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 15:46:13 by nsmail            #+#    #+#             */
/*   Updated: 2025/12/18 06:34:14 by zaboulaza        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : _name(""), _grade_exec(150), _grade_sign(150), _signed(false){
}

Form::~Form(){}

Form::Form(const std::string name, int grade_exec, int grade_sign) : _name(name), _grade_exec(grade_exec),
                                                                     _grade_sign(grade_sign), _signed(false){
    if (grade_exec < 1 || grade_sign < 1)
        throw GradeTooHighException();
    else if (grade_sign > 150 || grade_exec > 150)
        throw GradeTooLowException();
}

Form::Form(const Form &form) :   _name(form._name), _grade_exec(form._grade_exec),
                                 _grade_sign(form._grade_sign), _signed(false)
{
    *this = form;
}

Form &Form::operator=(const Form &form){
    if (this != &form){
        this->_signed = form._signed;
    }
    return *this;
}

void Form::beSigned(const Bureaucrat &bur){
    if(bur.getGrade() > this->getGrade_sign()){
        throw GradeTooLowException();
    }
}

const std::string Form::getName() const {
    return (this->_name);
}

int Form::getGrade_exec() const {
    return (this->_grade_exec);
}

int Form::getGrade_sign() const {
    return (this->_grade_sign);
}

std::ostream &operator<<(std::ostream &out, const Form &form){
    out << "the Form : " << form.getName() << " have a grade_exec equal to : " << form.getGrade_exec()
        << " and a grade_sign equal to " << form.getGrade_sign() << std::endl;
    return (out);
}
