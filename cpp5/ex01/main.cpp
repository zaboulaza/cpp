/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaboulaza <zaboulaza@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 18:09:50 by nsmail            #+#    #+#             */
/*   Updated: 2025/12/18 06:33:48 by zaboulaza        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(){

    try{
        Bureaucrat zabou("zaboulaza", 2);
        // Bureaucrat zabou("zaboulaza", 100);
        // Form formulaire("nunu", 200, 50);
        Form formulaire("nunu", 100, 50);
        std::cout << formulaire;
        zabou.signForm(formulaire);
    }
    catch (std::exception &e){
        std::cout << "Erreur : " << e.what() << std::endl;
    }
    std::cout << "test " << std::endl;
    return (1);
}