/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 12:10:49 by nsmail            #+#    #+#             */
/*   Updated: 2025/12/21 07:23:59 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
    
    public:

        PresidentialPardonForm() {};
        PresidentialPardonForm(std::string targ);
        PresidentialPardonForm(const PresidentialPardonForm &pres);
        PresidentialPardonForm &operator=(const PresidentialPardonForm &pres);
        ~PresidentialPardonForm() {};
        void execute(Bureaucrat const &executor) const;

    private:

        std::string _target;
};
