/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaboulaza <zaboulaza@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 21:46:08 by nsmail            #+#    #+#             */
/*   Updated: 2025/11/11 15:52:03 by zaboulaza        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "test.hpp"

int main(){
    
    Sample instance;

    instance.foo = 42;
    std::cout << "main instance.foo == " << instance.foo << std::endl;
    instance.bar();
    return (0);
}
