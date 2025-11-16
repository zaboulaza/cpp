/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cpp_test.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 17:15:32 by nsmail            #+#    #+#             */
/*   Updated: 2025/11/15 20:25:15 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream> 

int main(int ac, char **av)
{
    std::string str = "adsfadsfadsf";
    int nb;
    std::istringstream(str) >> nb;
    nb = nb * 2;
    std::cout << nb << std::endl;
}
