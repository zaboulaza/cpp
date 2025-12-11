/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 02:42:25 by zaboulaza         #+#    #+#             */
/*   Updated: 2025/12/10 13:34:31 by nsmail           ###   ########.fr       */
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
    this->_type = "Dog";
}

Dog::~Dog(){
    std::cout << "--------> Dog Destructor called" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "Dog sound" << std::endl;
}

Cat::Cat(){
    std::cout << "--------> Cat constructor called" << std::endl;
    this->_type = "Cat";
}

Cat::~Cat(){
    std::cout << "--------> Cat destructor called" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "Cat sound" << std::endl;
}





WrongAnimal::WrongAnimal(){
    std::cout << "--------> WrongAnimal constructor called" << std::endl;
    this->_type = "WrongAnimal";
}

WrongAnimal::~WrongAnimal(){
    std::cout << "--------> WrongAnimal Destructor called" << std::endl;
}

std::string WrongAnimal::getType() const {
    return(this->_type);
}

void WrongAnimal::makeSound() const {
    std::cout << "WrongAnimal sound" << std::endl;
}

WrongCat::WrongCat(){
    std::cout << "--------> WrongCat constructor called" << std::endl;
    this->_type = "WrongCat";
}

WrongCat::~WrongCat(){
    std::cout << "--------> WrongCat Destructor called" << std::endl;
}

void WrongCat::makeSound() const {
    std::cout << "WrongCat sound" << std::endl;
}
