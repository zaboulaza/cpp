/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaboulaza <zaboulaza@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 02:42:19 by zaboulaza         #+#    #+#             */
/*   Updated: 2025/12/04 02:28:42 by zaboulaza        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"

int main(){
    
    Animal *a = new Dog();
    // Animal *b;

    // std::cout << b->getType() << std::endl; 
    a->makeSound();
    
    return 0;
}
