/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 04:52:17 by nsmail            #+#    #+#             */
/*   Updated: 2025/11/19 18:36:56 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

Zombie *newZombie(std::string name);
void randomChump(std::string name);

class Zombie {
    
    public:
    
    void annouce(void);
    
    Zombie(std::string name);
    ~Zombie(void);
    
    private:
    
    std::string _name;
};
