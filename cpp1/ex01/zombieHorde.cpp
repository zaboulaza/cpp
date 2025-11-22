/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 20:41:35 by nsmail            #+#    #+#             */
/*   Updated: 2025/11/19 22:34:23 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name){
    
    Zombie *zz = new Zombie[N];
    
    for (int i = 0; i < N; i++) {
        zz[i].setName(name);
    }
    return zz;
}
