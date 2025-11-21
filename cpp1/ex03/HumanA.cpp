/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 23:00:08 by nsmail            #+#    #+#             */
/*   Updated: 2025/11/21 04:25:07 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumainA.hpp"
#include "HumainB.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
: _weapon(weapon), _name(name)
{
    return;
}

HumanA::~HumanA(){

    return;
}


