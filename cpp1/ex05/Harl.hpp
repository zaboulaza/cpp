/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 04:34:47 by nsmail            #+#    #+#             */
/*   Updated: 2025/11/22 04:43:34 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class Harl {
    
    public:

        void complain(std::string level);
    
    private:

        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
};
