/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 12:15:52 by nsmail            #+#    #+#             */
/*   Updated: 2025/12/21 08:22:46 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
    
    public:

        ShrubberyCreationForm() {};
        ShrubberyCreationForm(std::string targ);
        ShrubberyCreationForm(const ShrubberyCreationForm &pres);
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &pres);
        ~ShrubberyCreationForm() {};
        void execute(Bureaucrat const &executor) const;

    private:

        std::string _target;
};
