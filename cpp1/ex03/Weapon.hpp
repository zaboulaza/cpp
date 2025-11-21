/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 22:58:48 by nsmail            #+#    #+#             */
/*   Updated: 2025/11/21 04:09:15 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class Weapon {

    public:

        Weapon(std::string type);
        ~Weapon();
        std::string     getType(void);
        void            setType(std::string type);
        
    private:
    
        std::string _type;
};
