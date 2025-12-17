/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 15:46:13 by nsmail            #+#    #+#             */
/*   Updated: 2025/12/17 16:18:21 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(const std::string name, int i) : _name(name), _grade_exec(i), _grade_sign(i){
    if (i < 1)
        throw GradeTooHighException();
    else if (i > 150)
        throw GradeTooLowException();
}

Form::Form(const Form &form){
    *this = form;
}
