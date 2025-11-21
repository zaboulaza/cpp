/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumainB.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 23:00:23 by nsmail            #+#    #+#             */
/*   Updated: 2025/11/21 05:18:56 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanB {

    public:

        HumanB(std::string name);
        ~HumanB();
        void            setWeapon(Weapon &weapon);
        void            attack();
        
        
    private:
        
        Weapon          *_weapon;
        std::string     _name;
};
