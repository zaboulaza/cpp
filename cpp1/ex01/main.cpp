/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 20:40:39 by nsmail            #+#    #+#             */
/*   Updated: 2025/11/19 22:33:29 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>

int main(void){

    std::string str = "toto";
    Zombie *zz = zombieHorde(3, str);
    delete [] zz;
    return (1);
}
