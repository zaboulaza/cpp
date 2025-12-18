/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 19:02:09 by nsmail            #+#    #+#             */
/*   Updated: 2025/12/18 12:41:15 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

class Bureaucrat;  // Forward declaration

class AForm {

    public:

        AForm();
        AForm(const std::string name, int grade_exec , int grade_sign);
        AForm( const AForm &Aform);
        AForm &operator=(const AForm &Aform);
        virtual ~AForm();

        const std::string getName() const;
        int getGrade_exec() const;
        int getGrade_sign() const;
        void beSigned(const Bureaucrat &bur);
        bool getSingned() const;
        virtual void execute(Bureaucrat const &executor) const = 0;

        protected:

            class NotSigned : public std::exception {
                const char *what() const throw(){
                    return ("are not signed");
                }
            };

    private:

        const std::string _name;
        const int _grade_exec;
        const int _grade_sign;
        bool _signed;

        class GradeTooHighException : public std::exception {
            const char *what() const throw(){
                return ("grade Aform to hight");
            }
        };

        class GradeTooLowException : public std::exception {
            const char *what() const throw(){
                return ("grade Aform to low");
            }
        };
};

std::ostream &operator<<(std::ostream &out, const AForm &Aform);
