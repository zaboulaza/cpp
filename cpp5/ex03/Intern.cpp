/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaboulaza <zaboulaza@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 11:22:48 by nsmail            #+#    #+#             */
/*   Updated: 2025/12/22 14:27:31 by zaboulaza        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "iostream"

AForm *Intern::makeForm(std::string form_name, std::string target){
    
    Intern intern;
    
    std::string levels[3] = {
        "robotomy request",
        "shrubbery creation", 
        "presidential pardon"
    };

    AForm *(Intern::*action[])(const std::string&) = {
        &Intern::createRobotomy,
        &Intern::createShrubbery,
        &Intern::createPresidential
    };

    for(int j = 0; j < 3; j++){
        if (form_name == levels[j]){
            return (this->*action[j])(target);
        }
    }
    throw NotFound();
}


AForm* Intern::createShrubbery(const std::string &target){
    return (new ShrubberyCreationForm(target));
}

AForm* Intern::createRobotomy(const std::string &target){
    return (new RobotomyRequestForm(target));
}

AForm* Intern::createPresidential(const std::string &target){
    return (new PresidentialPardonForm(target));
}

Intern::Intern(const Intern &intern){
    *this = intern;
}

Intern &Intern::operator=(const Intern &intern){
    (void)intern;
    return (*this);
}