/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 14:41:08 by nsmail            #+#    #+#             */
/*   Updated: 2025/12/18 16:43:54 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &pres) : AForm("PresidentialPardonForm", 5, 25){
    *this = pres;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &pres){
    if(this != &pres){
        this->_target = pres._target;
    }
    return (*this);
}

PresidentialPardonForm::PresidentialPardonForm(std::string targ) : AForm("PresidentialPardonForm", 5, 25){
    this->_target = targ;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const{
    if (this->getSingned() == false)
        throw NotSigned();
    if (this->getGrade_exec() < executor.getGrade())
        throw NotExecute();
    std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
