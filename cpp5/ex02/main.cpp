/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 18:09:50 by nsmail            #+#    #+#             */
/*   Updated: 2025/12/21 08:50:44 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(){

    try{
        Bureaucrat  samuel("Samuel", 4);

        PresidentialPardonForm form("Nas");

        samuel.signAForm(form);
        samuel.executeForm(form);
        std::cout << std::endl;
    }
    catch (std::exception &e){
        std::cout << "Erreur : " << e.what() << std::endl;
    }

    try{
        Bureaucrat  antoine("antoine", 20);

        RobotomyRequestForm rob("Rob");

        antoine.signAForm(rob);
        antoine.executeForm(rob);
        std::cout << std::endl;
    }
    catch (std::exception &e){
        std::cout << "Erreur : " << e.what() << std::endl;
    }

    try{
        Bureaucrat  toto("toto", 1);

        ShrubberyCreationForm rob("Rob");

        toto.signAForm(rob);
        toto.executeForm(rob);
        std::cout << std::endl;
    }
    catch (std::exception &e){
        std::cout << "Erreur : " << e.what() << std::endl;
    }
    return (1);
}
