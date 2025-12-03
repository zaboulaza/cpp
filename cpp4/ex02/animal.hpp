/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaboulaza <zaboulaza@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 02:42:22 by zaboulaza         #+#    #+#             */
/*   Updated: 2025/12/03 06:37:30 by zaboulaza        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <sstream>

class Brain {
    
    public: 
            
        Brain();
        Brain(const Brain &brain);
        ~Brain();
        Brain &operator=(const Brain &brain);
        std::string ideas[100];

    private:

};

class Animal {

    public:

        Animal();
        virtual ~Animal();
        std::string getType(void) const;
        virtual void makeSound(void) const;
    
    protected:
    
        std::string _type;
};

class Dog : public Animal {
  
    public:
    
        Dog();
        ~Dog();
        void makeSound(void) const;
        Brain* brain;

    private:
    
};

class Cat : public Animal {
    
    public:

        Cat();
        ~Cat();
        void makeSound(void) const;
        Brain* brain;

    private:

};
