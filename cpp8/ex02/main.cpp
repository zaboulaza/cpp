/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaboulaza <zaboulaza@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 15:03:41 by zaboulaza         #+#    #+#             */
/*   Updated: 2026/01/12 18:04:30 by zaboulaza        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutanStack.hpp"

int main(){
    
    MutantStack<int> mstack;
    
    mstack.push(5);
    mstack.push(17);
    
    std::cout << mstack.top() << std::endl;

    mstack.pop();
    
    std::cout << mstack.size() << std::endl;
    
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    
    ++it;
    --it;
    while (it != ite){
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);

    MutantStack<std::string> sstack;
    
 
    sstack.push("abc");
    sstack.push("def");
    sstack.push("ghi");
    sstack.push("jkl");
    
    MutantStack<std::string>::iterator it2 = sstack.begin();
    MutantStack<std::string>::iterator ite2 = sstack.end();
    
    while (it2 != ite2){
        std::cout << *it2 << std::endl;
        ++it2;
    }
    
    return 0;
}
