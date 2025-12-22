/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 15:40:07 by nsmail            #+#    #+#             */
/*   Updated: 2025/12/21 08:40:49 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.hpp"
#include <string>
#include <iostream>

class Bureaucrat {
  
    public:

        Bureaucrat();
        Bureaucrat( const Bureaucrat &bur);
        Bureaucrat(const std::string name, int i);
        Bureaucrat &operator=(const Bureaucrat &bur);
        ~Bureaucrat();
        
        const std::string getName() const;
        int getGrade() const;
    
        void increment();
        void decrement();
        void signAForm(AForm &Aform);
        void executeForm(AForm const & form) const;

        
        private:
        
        
        const std::string _name;
        int _range;
        
        class ToHight : public std::exception {
            const char *what() const throw(){
                return ("Grade to hight");
            }
        };
    
        class ToLow : public std::exception {
            const char *what() const throw(){
                return ("Grade to low");
            }
        };
        
    };
    
std::ostream &operator<<(std::ostream &out, const Bureaucrat &bur);
