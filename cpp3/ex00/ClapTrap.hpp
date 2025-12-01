/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaboulaza <zaboulaza@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 17:23:07 by zaboulaza         #+#    #+#             */
/*   Updated: 2025/12/01 18:25:34 by zaboulaza        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class ClapTrap {

    public:

        ClapTrap();
        ClapTrap(const std::string name);
        ~ClapTrap();

        // ClapTrap &operator=(const ClapTrap &clap);
        
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

    private:
    
        std::string     _name;
        int             _Hit;
        int             _Energy;
        int             _Attack;
    
};
