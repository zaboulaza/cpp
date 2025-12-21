/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 12:15:15 by nsmail            #+#    #+#             */
/*   Updated: 2025/12/21 08:11:27 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.hpp"

class RobotomyRequestForm : public AForm {
    
    public:

        RobotomyRequestForm() {};
        RobotomyRequestForm(std::string targ);
        RobotomyRequestForm(const RobotomyRequestForm &pres);
        RobotomyRequestForm &operator=(const RobotomyRequestForm &pres);
        ~RobotomyRequestForm() {};
        void execute(Bureaucrat const &executor) const;

    private:

        std::string _target;
};
