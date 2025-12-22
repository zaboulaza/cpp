/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 11:29:52 by nsmail            #+#    #+#             */
/*   Updated: 2025/12/21 14:01:28 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.hpp"

class Intern {
    
    public :

        Intern() {};
        ~Intern() {};
        Intern(const Intern &intern) {};
        Intern &operator=(const Intern &intern) {};

        AForm &makeForm(std::string form_name, std::string target);

    private :

        AForm* createShrubbery(const std::string &target);
        AForm* createRobotomy(const std::string &target);
        AForm* createPresidential(const std::string &target);

};
