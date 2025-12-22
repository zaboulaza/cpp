/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaboulaza <zaboulaza@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 11:29:52 by nsmail            #+#    #+#             */
/*   Updated: 2025/12/22 14:25:26 by zaboulaza        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.hpp"

class Intern {
    
    public :

        Intern() {};
        ~Intern() {};
        Intern(const Intern &intern);
        Intern &operator=(const Intern &intern);

        AForm *makeForm(std::string form_name, std::string target);

    private :

        class NotFound : public std::exception{
            const char *what() const throw(){
                return ("formulair not found");
            }
        };

        AForm* createShrubbery(const std::string &target);
        AForm* createRobotomy(const std::string &target);
        AForm* createPresidential(const std::string &target);

};
