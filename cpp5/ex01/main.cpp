/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 18:09:50 by nsmail            #+#    #+#             */
/*   Updated: 2025/12/16 18:38:33 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(){

    try{
        Bureaucrat zabou("zaboulaza", 2);
        std::cout << zabou;
        zabou.decrement();
        std::cout << zabou;
        zabou.decrement();
        std::cout << zabou;
    }
    catch (std::exception &e){
        std::cout << "Erreur : " << e.what() << std::endl;
    }
    std::cout << "test " << std::endl;
    return (1);
}