/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 21:25:59 by nsmail            #+#    #+#             */
/*   Updated: 2025/11/22 21:27:48 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class Harl {
    
    public:

        void complain(std::string level);
    
    private:

        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
};
