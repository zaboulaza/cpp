/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 19:02:09 by nsmail            #+#    #+#             */
/*   Updated: 2025/12/17 15:50:28 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

class Form {
    
    public:

        ~Form();
        Form(const std::string name, int i);
        Form( const Form &form);
        Form &operator=(const Form &form);

        void beSigned(const Bureaucrat &bur);

    private:

        const std::string _name;
        const int _grade_exec;
        const int _grade_sign;
        bool _signed;

        class GradeTooHighException : public std::exception {
            const char *what() const throw(){
                return ("grade form to hight");
            }
        };

        class GradeTooLowException : public std::exception {
            const char *what() const throw(){
                return ("grade form to low");
            }
        };
};

std::ostream &operator<<(std::ostream &out, const Form &form);
