/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 05:29:39 by nsmail            #+#    #+#             */
/*   Updated: 2025/11/22 04:16:31 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(void){
    
    std::string filename;
    std::string s1;
    std::string s2;
    std::string file1tmp;
    std::string subfirst;
    std::string sublast;
    std::size_t found;
    

    std::cout << "pleas enter your file name ---> " ;
    if (!std::getline(std::cin, filename))
    {
        std::cout << std::endl;
        std::cout << "EXIT" << std::endl;
        return (0);
    }
    std::cout << "please enter which name you want to replace ---> " ;
    if (!std::getline(std::cin, s1))
    {
        std::cout << std::endl;
        std::cout << "EXIT" << std::endl;
        return (0);
    }
    std::cout << "please enter whereby you want to replace ---> " ;
    if (!std::getline(std::cin, s2))
    {
        std::cout << std::endl;
        std::cout << "EXIT" << std::endl;
        return (0);
    }

    std::ifstream ifs;
    ifs.open (filename.c_str(), std::ifstream::in);
    if (!ifs){
        std::cout << "err when open file" << std::endl;
        return(0);
    }
    char c = ifs.get();
    while (ifs.good()) {
        file1tmp += c;
        c = ifs.get();
    }
    ifs.close();
    
    while (1){
        
        found = file1tmp.find(s1);
        
        if (found != std::string::npos){
            
            subfirst = file1tmp.substr(0, found);
            subfirst += s2;
            sublast = file1tmp.substr(found + s1.length(), file1tmp.length());
            subfirst += sublast;
        }
        else if (found == std::string::npos){
            break;
        }
        file1tmp = subfirst;
    }
    filename += ".replace";
    std::ofstream fichier(filename.c_str(), std::ios::out | std::ios::trunc);
        
    if(fichier){
        fichier << file1tmp ;
        fichier.close();
    }
    else
        std::cerr << "Erreur à l'ouverture !" << std::endl;
    return (1);
}

