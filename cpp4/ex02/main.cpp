/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaboulaza <zaboulaza@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 02:42:19 by zaboulaza         #+#    #+#             */
/*   Updated: 2025/12/03 06:39:32 by zaboulaza        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"

int main()
{

    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    delete j;
    delete i;

    // Cat c;
    
    // Animal *aa[10];

    // for(int i = 0; i < 5; i++){
    //     aa[i] = new Dog();
    // }
    // for(int i = 5; i < 10; i++)
    //     aa[i] = new Cat();
    
    // for(int i = 0; i < 10 ; i++)
    //     delete aa[i];

        
    // Brain a;
    // Brain b(a);

    // std::cout << a.ideas[0] << std::endl;
    // std::cout << b.ideas[0] << std::endl;

    // b.ideas[0] = "testtttt";
    // std::cout << a.ideas[0] << std::endl;
    
    return 0;
}
