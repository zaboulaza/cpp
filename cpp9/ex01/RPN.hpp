/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaboulaza <zaboulaza@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 15:19:28 by zaboulaza         #+#    #+#             */
/*   Updated: 2026/01/15 22:16:57 by zaboulaza        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <stack>
#include <iostream>

class RPN {
  
    public:

        RPN(){};
        ~RPN(){};
        RPN(const RPN &rpn);
        RPN &operator=(const RPN &rpn);
    
        int verif(std::string str);
        int make_stack(std::string str);
        std::string get(){return(this->_str);};

    private:
    
        std::string _str;
        std::stack<int> _stack;
};
