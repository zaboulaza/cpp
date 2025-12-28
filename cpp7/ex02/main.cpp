/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 13:21:13 by nsmail            #+#    #+#             */
/*   Updated: 2025/12/28 19:15:16 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main() {
    try {
        std::cout << "Test Array<int> avec taille 5\n";
        Array<int> a(5);

        for (unsigned int i = 0; i < 5; i++)
            a[i] = i * 10;

        for (unsigned int i = 0; i < 5; i++)
            std::cout << "a[" << i << "] = " << a[i] << std::endl;

        Array<int> b(a);
        std::cout << "\nTest constructeur par copie\n";
        for (unsigned int i = 0; i < 5; i++)
            std::cout << "b[" << i << "] = " << b[i] << std::endl;

        Array<int> c;
        c = a;
        std::cout << "\nTest opérateur d'affectation\n";
        for (unsigned int i = 0; i < 5; i++)
            std::cout << "c[" << i << "] = " << c[i] << std::endl;
        std::cout << std::endl;
        std::cout << a[4] << std::endl;
        std::cout << "\nTest exception (index hors limite)\n";
        std::cout << a[10] << std::endl;

    } catch (std::exception &e) {
        std::cout << "Exception attrapée : " << e.what() << std::endl;
    }

    return 0;
}
