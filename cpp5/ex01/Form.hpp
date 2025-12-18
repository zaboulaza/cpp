/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaboulaza <zaboulaza@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 19:02:09 by nsmail            #+#    #+#             */
/*   Updated: 2025/12/18 06:27:43 by zaboulaza        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

class Bureaucrat;  // Forward declaration

class Form {
    
    public:

        Form();
        Form(const std::string name, int grade_exec , int grade_sign);
        Form( const Form &form);
        Form &operator=(const Form &form);
        ~Form();

        const std::string getName() const;
        int getGrade_exec() const;
        int getGrade_sign() const;
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
