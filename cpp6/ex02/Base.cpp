/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 17:47:06 by zaboulaza         #+#    #+#             */
/*   Updated: 2025/12/24 16:59:42 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base *Base::generate(){
    int rand = std::rand() % 3;
    
    if (rand == 0)
        return (new A());
    else if (rand == 1)
        return (new B());
    return (new C());
}

void Base::identify(Base *p){
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
}

void Base::identify(Base &p){
    try{
        (void)dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
    }
    catch(std::exception &e){
        std::cout << "identify A failed" << std::endl;
    }
    
    try{
        (void)dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
    }
    catch(std::exception &e){
        std::cout << "identify B failed" << std::endl;    
    }
    
    try{
        (void)dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
    }
    catch(std::exception &e){
        std::cout << "identify C failed" << std::endl;   
    }
}
