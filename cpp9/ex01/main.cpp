/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaboulaza <zaboulaza@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 15:19:18 by zaboulaza         #+#    #+#             */
/*   Updated: 2026/01/15 22:28:13 by zaboulaza        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av){

    if (ac != 2){
        std::cout << "error" << std::endl;
        return (0);
    }
    
    RPN rp;

    if (rp.verif(av[1])){
        rp.make_stack(rp.get());
    }

    return (1);
}
