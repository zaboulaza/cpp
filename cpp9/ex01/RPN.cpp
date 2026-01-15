/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaboulaza <zaboulaza@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 15:19:24 by zaboulaza         #+#    #+#             */
/*   Updated: 2026/01/15 22:30:03 by zaboulaza        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(const RPN &rpn){
    *this = rpn;
}

RPN &RPN::operator=(const RPN &rpn){
    if (this != &rpn){
        
    }
    return (*this);
}

int RPN::verif(std::string str){

    if (str.length() < 5){
        std::cout << "error" << std::endl;
        return (0);
    }
    if (!isdigit(str[0]) || str[1] != ' ' || !isdigit(str[2])){
        std::cout << "error" << std::endl;
        return (0);
    }
    for(int i = 0; str[i]; i++){
        if (!(str[i] >= '0' && str[i] <= '9') && str[i] != '+'
                && str[i] != '-' && str[i] != '/' && str[i] != '*' && str[i] != ' '){
            std::cout << "error" << std::endl;
            return (0);            
        }
        if ((str[i] >= '0' && str[i] <= '9') || str[i] == '+'
                || str[i] == '-' || str[i] == '/' || str[i] == '*'){
            if (str[i + 1] != ' ' && str[i + 1] != '\0'){
                std::cout << "error" << std::endl;
                return (0);
            }
        }
        if (str[i] == ' ' && str[i + 1] == ' '){
            std::cout << "error" << std::endl;
            return (0);
        }
    }
    for(int i = 0; str[i]; i++){
        if (str[i] != ' '){
            this->_str += str[i]; 
        }
    }
    return (1);
}

int RPN::make_stack(std::string str){
    
    for (int i = 0; str[i]; i++){
        if (str[i] >= '0' && str[i] <= '9'){
            this->_stack.push(str[i] - '0');
        }
        if (str[i] == '+'){
            if (this->_stack.size() < 2){
                std::cout << "error" << std::endl;
                return (0);
            }
            int b = this->_stack.top();
            this->_stack.pop();
            int a = this->_stack.top();
            this->_stack.pop();
            this->_stack.push(a + b);
        }
        if (str[i] == '-'){
            if (this->_stack.size() < 2){
                std::cout << "error" << std::endl;
                return (0);
            }
            int b = this->_stack.top();
            this->_stack.pop();
            int a = this->_stack.top();
            this->_stack.pop();
            this->_stack.push(a - b);
        }
        if (str[i] == '*'){
            if (this->_stack.size() < 2){
                std::cout << "error" << std::endl;
                return (0);
            }
            int b = this->_stack.top();
            this->_stack.pop();
            int a = this->_stack.top();
            this->_stack.pop();
            this->_stack.push(a * b);
        }
        if (str[i] == '/'){
            if (this->_stack.size() < 2){
                std::cout << "error" << std::endl;
                return (0);
            }
            int b = this->_stack.top();
            this->_stack.pop();
            int a = this->_stack.top();
            this->_stack.pop();
            this->_stack.push(a / b);
        }
    }
    if (this->_stack.size() > 1){
        std::cout << "error" << std::endl;
        return (0);
    }
    std::cout << this->_stack.top() << std::endl;
    return (1);
}
