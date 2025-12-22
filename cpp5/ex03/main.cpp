/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaboulaza <zaboulaza@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 18:09:50 by nsmail            #+#    #+#             */
/*   Updated: 2025/12/22 14:37:40 by zaboulaza        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main(){

    AForm *form = NULL;    
    AForm *rob = NULL;
    AForm *creation = NULL;

    try{
        Bureaucrat  samuel("Samuel", 4);
        Intern Random_intern;
        
        form = Random_intern.makeForm("presidential pardon", "form");

        samuel.signAForm(*form);
        samuel.executeForm(*form);
        std::cout << std::endl;
    }
    catch (std::exception &e){
        std::cout << "Erreur : " << e.what() << std::endl;
        std::cout << std::endl;
    }

    try{
        Bureaucrat  antoine("antoine", 20);
        Intern Random_intern;

        rob = Random_intern.makeForm("robotomy request", "rob");

        antoine.signAForm(*rob);
        antoine.executeForm(*rob);
        std::cout << std::endl;
    }
    catch (std::exception &e){
        std::cout << "Erreur : " << e.what() << std::endl;
    }

    try{
        Bureaucrat  toto("toto", 1);
        
        Intern Rondom_intern;

        creation = Rondom_intern.makeForm("shrubbery creation", "crea");
        
        toto.signAForm(*creation);
        toto.executeForm(*creation);
        std::cout << std::endl;
    }
    catch (std::exception &e){
        std::cout << "Erreur : " << e.what() << std::endl;
    }

    delete form;
    delete rob;
    delete creation;
    return (1);
}
