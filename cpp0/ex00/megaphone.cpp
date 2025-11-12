/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaboulaza <zaboulaza@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 14:48:57 by zaboulaza         #+#    #+#             */
/*   Updated: 2025/11/11 14:15:38 by zaboulaza        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main (int ac, char **av)
{
    if (ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (1);
    }
    for (int j = 1; av[j]; j++)
    {
        for(int i = 0; av[j][i]; i++)
        {
            std::cout << (char)std::toupper(av[j][i]);
        }
    }
    std::cout << std::endl;
    return (1);
}
