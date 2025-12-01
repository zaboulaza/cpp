/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaboulaza <zaboulaza@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 17:23:09 by zaboulaza         #+#    #+#             */
/*   Updated: 2025/12/01 21:01:51 by zaboulaza        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void){

    // ClapTrap a("toto");
    FragTrap b("titi");

    b.attack("darius");
    b.highFivesGuys();
    
    b.takeDamage(5);
}
