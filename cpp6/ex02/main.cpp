/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 17:42:29 by zaboulaza         #+#    #+#             */
/*   Updated: 2025/12/24 16:59:17 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main(){
    
    std::srand(std::time(NULL));

    Base *base = Base::generate();
    // Base::identify(base);
    Base::identify(*base);
    delete base;
    
    return (1);
}
