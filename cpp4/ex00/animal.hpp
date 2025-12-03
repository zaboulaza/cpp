/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaboulaza <zaboulaza@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 02:42:22 by zaboulaza         #+#    #+#             */
/*   Updated: 2025/12/03 03:36:18 by zaboulaza        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

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
    
    private:
    
};

class Cat : public Animal {
    
    public:

    Cat();
    ~Cat();
    void makeSound(void) const;

    private:


};

class WrongAnimal {

    public:

        WrongAnimal();
        ~WrongAnimal();
        std::string getType(void) const;
        void makeSound(void) const;
    
    protected:
    
        std::string _type;
};

class WrongCat : public WrongAnimal {
  
    public:
    
        WrongCat();
        ~WrongCat();
        void makeSound(void) const;
    
    private:
    
};