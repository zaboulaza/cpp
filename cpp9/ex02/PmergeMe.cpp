/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaboulaza <zaboulaza@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 15:17:08 by zaboulaza         #+#    #+#             */
/*   Updated: 2026/01/18 03:41:28 by zaboulaza        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

Pmerge::Pmerge(const Pmerge &merge){
    *this = merge;
}

Pmerge &Pmerge::operator=(const Pmerge &merge){
    if (this != &merge){
        this->_dec = merge._dec;
        this->_vec = merge._vec;
        this->_before = merge._before;
    }
    return (*this);
}

int Pmerge::verif_av(char **av){
    
    for(int i = 1; av[i] ; i++){
        for (int j = 0; av[i][j]; j++){
            if (!(av[i][j] >= '0' && av[i][j] <= '9'))
                return (0);
        }
        long nb = std::strtol(av[i], NULL, 10);
        if (nb <= 0 || nb > INT_MAX)
            return (0);
    }
    return(1);
}

void Pmerge::fill_the_container(char **av){
    
    for (int i = 1; av[i]; i++){
        int nb = std::strtol(av[i], NULL, 10);
        this->_dec.push_back(nb);
        this->_vec.push_back(nb);
        this->_before.push_back(nb);
    }
    
    std::cout << "Before:    " ;
    for (size_t i = 0; i < _before.size(); i++){
        std::cout << _before[i] << " " ;
    }
    std::cout << std::endl;
    
    struct timeval _vec_start, _vec_end;
    gettimeofday(&_vec_start, NULL);
    this->_vec = sort_vector(_vec);
    gettimeofday(&_vec_end, NULL);
    double _vec_duration = (_vec_end.tv_sec - _vec_start.tv_sec) * 1000000.0 + (_vec_end.tv_usec - _vec_start.tv_usec);
    
    struct timeval _dec_start, _dec_end;
    gettimeofday(&_dec_start, NULL);
    this->_dec = sort_deque(_dec);
    gettimeofday(&_dec_end, NULL);
    double _dec_duration = (_dec_end.tv_sec - _dec_start.tv_sec) * 1000000.0 + (_dec_end.tv_usec - _dec_start.tv_usec);

    std::cout << "After:     " ;
    for (size_t i = 0; i < _vec.size(); i++){
        std::cout << _vec[i] << " " ;
    }
    std::cout << std::endl;

    
    std::cout   << "Time to process a range of   " << _vec.size() 
                << " elements with std::[vector] : " << std::fixed << std::setprecision(5) << _vec_duration << " us" << std::endl;

    std::cout   << "Time to process a range of   " << _dec.size() 
                << " elements with std::[deque]  : " << std::fixed << std::setprecision(5) << _dec_duration << " us" << std::endl;
}

std::vector<int> Pmerge::sort_vector(std::vector<int> &hight){
 
    if (hight.size() <= 1)
        return(hight);

    std::vector<int> new_hight;
    std::vector<int> new_low;

    for (std::vector<int>::iterator it = hight.begin(); it != hight.end(); it += 2){
        
        if (it + 1 != hight.end()){
            if (*it < *(it + 1)){
                new_hight.push_back(*(it + 1));
                new_low.push_back(*it);
            }
            else{
                new_hight.push_back(*it);
                new_low.push_back(*(it + 1));
            }
        }
        else{
            new_low.push_back(*it);
            break;
        }
    }

    std::vector<int> sorted_hight = sort_vector(new_hight);


    for (size_t i = 0; i < new_low.size(); i++){
        int pos = search_pos_vec(sorted_hight, new_low[i]);
        sorted_hight.insert(sorted_hight.begin() + pos, new_low[i]);
    }
    
    return(sorted_hight);
}

int Pmerge::search_pos_vec(std::vector<int> &vec, int value)
{
    int left = 0;
    int right = vec.size();

    while (left < right)
    {
        int mid = (left + right) / 2;
        if (vec[mid] < value)
            left = mid + 1;
        else
            right = mid;
    }
    return left;
}


std::deque<int> Pmerge::sort_deque(std::deque<int> &hight){
 
    if (hight.size() <= 1)
        return(hight);

    std::deque<int> new_hight;
    std::deque<int> new_low;

    for (std::deque<int>::iterator it = hight.begin(); it != hight.end(); it += 2){
        
        if (it + 1 != hight.end()){
            if (*it < *(it + 1)){
                new_hight.push_back(*(it + 1));
                new_low.push_back(*it);
            }
            else{
                new_hight.push_back(*it);
                new_low.push_back(*(it + 1));
            }
        }
        else{
            new_low.push_back(*it);
            break;
        }
    }

    std::deque<int> sorted_hight = sort_deque(new_hight);


    for (size_t i = 0; i < new_low.size(); i++){
        int pos = search_pos_dec(sorted_hight, new_low[i]);
        sorted_hight.insert(sorted_hight.begin() + pos, new_low[i]);
    }
    
    return(sorted_hight);
}

int Pmerge::search_pos_dec(std::deque<int> &vec, int value)
{
    int left = 0;
    int right = vec.size();

    while (left < right)
    {
        int mid = (left + right) / 2;
        if (vec[mid] < value)
            left = mid + 1;
        else
            right = mid;
    }
    return left;
}
