/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 07:37:52 by nsmail            #+#    #+#             */
/*   Updated: 2025/12/21 08:47:48 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &pres) : AForm("RobotomyRequestForm", 45, 72){
    *this = pres;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &pres){
    if(this != &pres){
        this->_target = pres._target;
    }
    return (*this);
}

RobotomyRequestForm::RobotomyRequestForm(std::string targ) : AForm("RobotomyRequestForm", 45, 72){
    this->_target = targ;
    std::srand(std::time(NULL));
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const{
    int i = std::rand();
    if (this->getSingned() == false)
        throw NotSigned();
    if (this->getGrade_exec() < executor.getGrade())
        throw NotExecute();
    std::cout << executor.getName() << " executed " << this->_target << std::endl;
    if (i % 2 != 0){
        std::cout << _target << " has been robotomized successfully 50\% of the time." << std::endl;
    }
    else
        std::cout << _target << " robotomized failed." << std::endl;

}
