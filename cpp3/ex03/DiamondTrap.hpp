/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaboulaza <zaboulaza@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 21:07:25 by zaboulaza         #+#    #+#             */
/*   Updated: 2025/12/01 23:04:04 by zaboulaza        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : virtual ScavTrap, public FragTrap {
    
    public:
    
        DiamondTrap();
        DiamondTrap(std::string name);
        ~DiamondTrap();

        void attack(const std::string name);
        void whoAmI();

    private:

        std::string _name;
};
