/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaboulaza <zaboulaza@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 02:42:25 by zaboulaza         #+#    #+#             */
/*   Updated: 2025/12/03 06:32:24 by zaboulaza        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"

Animal::Animal(){
    std::cout << "--------> Animal constructor called" << std::endl;
    this->_type = "animal";
}

Animal::~Animal(){
    std::cout << "--------> Animal Destructor called" << std::endl;
}

std::string Animal::getType() const {
    return(this->_type);
}

void Animal::makeSound() const {
    std::cout << "Animal sound" << std::endl;
}

Dog::Dog(){
    std::cout << "--------> Dog constructor called" << std::endl;
    this->brain = new Brain();
    this->_type = "Dog";
}

Dog::~Dog(){
    std::cout << "--------> Dog Destructor called" << std::endl;
    delete brain;
}

void Dog::makeSound() const {
    std::cout << "Dog sound" << std::endl;
}

Cat::Cat(){
    std::cout << "--------> Cat constructor called" << std::endl;
    this->brain = new Brain();
    this->_type = "Cat";
}

Cat::~Cat(){
    std::cout << "--------> Cat destructor called" << std::endl;
    delete brain;
}

void Cat::makeSound() const {
    std::cout << "Cat sound" << std::endl;
}

Brain::Brain() {
    std::cout << "--------> Brain constructo called" << std::endl;
    for (int i = 0; i < 100; i++){
        std::stringstream ss;
        ss << "idea" << i;
        this->ideas[i] = ss.str();
    }
}

Brain::Brain(const Brain &brain){
    std::cout << "--------> Brain copy constructor called" << std::endl;
    *this = brain;
}

Brain::~Brain() {
    std::cout << "--------> Brain destructor called" << std::endl;    
}

Brain &Brain::operator=(const Brain &brain) {
    if (this != &brain){
        for(int i = 0; i < 100; i++)
            this->ideas[i] = brain.ideas[i];
    }
    return (*this);
}