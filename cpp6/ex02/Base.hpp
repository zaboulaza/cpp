/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 17:42:34 by zaboulaza         #+#    #+#             */
/*   Updated: 2025/12/24 16:57:10 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include <ctime>
#include <cstdlib>

class Base {
    
    public :
        virtual ~Base() {};

        static Base *generate(void);
        static void identify(Base *p);
        static void identify(Base &p);
    
};

class A : public Base {};

class B : public Base {};

class C : public Base {};
