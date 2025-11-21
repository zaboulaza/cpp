/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumainA.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 22:59:43 by nsmail            #+#    #+#             */
/*   Updated: 2025/11/21 05:19:10 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanA {

    public:

        HumanA(std::string name, Weapon &weapon);
        ~HumanA();
        void            attack();
        
        private:
        
        Weapon          &_weapon;
        std::string     _name;
};
