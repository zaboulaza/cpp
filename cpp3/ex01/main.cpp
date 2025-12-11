/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 17:23:09 by zaboulaza         #+#    #+#             */
/*   Updated: 2025/12/10 17:06:28 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void){

    // ClapTrap a("toto");
    ScavTrap b("titi");

    b.attack("darius");
    b.guardGate();
    
    b.takeDamage(5);
}
