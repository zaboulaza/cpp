/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaboulaza <zaboulaza@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 15:17:11 by zaboulaza         #+#    #+#             */
/*   Updated: 2026/01/18 03:41:30 by zaboulaza        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <stack>
#include <vector>
#include <deque>
#include <string>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <climits>
#include <sys/time.h>

class Pmerge{
  
    public:

        Pmerge() {};
        ~Pmerge() {};
        Pmerge(const Pmerge &merge);
        Pmerge &operator=(const Pmerge &merge);
        int verif_av(char **av);
        void fill_the_container(char **av);
        std::vector<int> sort_vector(std::vector<int>& hight);
        int search_pos_vec(std::vector<int> &vec, int value);
        std::deque<int> sort_deque(std::deque<int>& hight);
        int search_pos_dec(std::deque<int> &dec, int value);


    private:
    
        std::vector<int>    _before;
        
        std::vector<int>    _vec;
        std::deque<int>     _dec;
    
};