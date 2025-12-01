/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaboulaza <zaboulaza@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 17:23:09 by zaboulaza         #+#    #+#             */
/*   Updated: 2025/12/01 18:54:02 by zaboulaza        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void){

    ClapTrap a("toto");

    a.attack("garen");
    a.attack("garen");
    a.attack("garen");
    a.attack("garen");
    a.attack("garen");
    a.attack("garen");
    a.attack("garen");
    a.attack("garen");
    a.attack("garen");
    a.attack("garen");
    a.attack("garen");

    std::cout << std::endl;

    a.takeDamage(2);
    a.takeDamage(2);
    a.takeDamage(2);
    a.takeDamage(2);
    a.takeDamage(2);
    a.takeDamage(2);
    a.takeDamage(2);

    std::cout << std::endl;

    a.beRepaired(2);
    a.beRepaired(2);
    a.beRepaired(2);
    
}
