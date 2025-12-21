/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 08:15:51 by nsmail            #+#    #+#             */
/*   Updated: 2025/12/21 08:47:31 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &pres) : AForm("ShrubberyCreationForm", 137, 145){
    *this = pres;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &pres){
    if(this != &pres){
        this->_target = pres._target;
    }
    return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string targ) : AForm("ShrubberyCreationForm", 137, 145){
    this->_target = targ;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const{
    if (this->getSingned() == false)
        throw NotSigned();
    if (this->getGrade_exec() < executor.getGrade())
        throw NotExecute();
    std::cout << executor.getName() << " executed " << this->_target << std::endl;
    std::string filename = this->_target;
    std::ofstream fichier(filename.c_str(), std::ios::out | std::ios::trunc);
    if(fichier){
        fichier << "                                  # #### ####" << std::endl;
        fichier << "                                ### \\/#|### |/####" << std::endl;
        fichier << "                               ##\\/#/ \\\\||/##/_/##/_#" << std::endl;
        fichier << "                             ###  \\/###|/ \\/ # ###" << std::endl;
        fichier << "                           ##_\\_#\\_\\## | #/###_/_####" << std::endl;
        fichier << "                          ## #### # \\ #| /  #### ##/##" << std::endl;
        fichier << "                           __#_--###`  |{,###---###-~" << std::endl;
        fichier << "                                     \\ }{" << std::endl;
        fichier << "                                      }}{" << std::endl;
        fichier << "                                      }}{" << std::endl;
        fichier << "                                      {{}}" << std::endl;
        fichier << "                                , -=-~{ .-^- _" << std::endl;
        fichier << "                                      `}" << std::endl;
        fichier << "                                       {" << std::endl;
        fichier.close();
    }
}
