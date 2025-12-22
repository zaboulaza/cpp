/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 11:22:48 by nsmail            #+#    #+#             */
/*   Updated: 2025/12/21 14:41:53 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "iostream"

AForm &Intern::makeForm(std::string form_name, std::string target{
    
    Intern intern;
    
    std::string levels[3] = {
        "robotomy request",
        "shrubbery creation", 
        "presidential pardon"
    };

    AForm* (Intern::*action[])(const std::string&) = {
        &Intern::createRobotomy,
        &Intern::createShrubbery,
        &Intern::createPresidential
    };

    for(int j = 0; j < 3; j++){
        if (form_name == levels[j]){
            return *(intern.*action[j])(target);
        }
    }
    throw std::runtime_error("Form not found");
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
