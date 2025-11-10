/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 21:46:08 by nsmail            #+#    #+#             */
/*   Updated: 2025/11/10 22:57:06 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "test.hpp"

int main(){

    {
        Sample ob(0);
        {
            Sample oo(1);
        }
    }
    Sample instance;
    std::cout << "test" << std::endl;
    std::cout << instance.x << std::endl;
    instance.x = 2;
    std::cout << instance.x << std::endl;
    return (0);
}
