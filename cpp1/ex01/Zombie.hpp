/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 20:40:59 by nsmail            #+#    #+#             */
/*   Updated: 2025/11/19 22:26:51 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Zombie{
    
    public:
        
        Zombie();
        ~Zombie();

        void annouce(std::string name);
        void setName(std::string name);
    
    private:
        
        std::string _name;
};

Zombie *zombieHorde(int N, std::string name);
