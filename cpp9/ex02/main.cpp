/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaboulaza <zaboulaza@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 15:16:59 by zaboulaza         #+#    #+#             */
/*   Updated: 2026/01/17 17:00:55 by zaboulaza        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av){
    
    Pmerge merge;

    if(ac <= 2 || !merge.verif_av(av)){
        std::cerr << "Error" << std::endl;
        return (0);
    }
    merge.fill_the_container(av);
    
    return (1);
}
