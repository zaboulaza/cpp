/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 13:21:17 by nsmail            #+#    #+#             */
/*   Updated: 2025/12/28 19:13:56 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

template <typename T> 
class Array {
    
    public:
    
        Array();
        ~Array();
        Array(unsigned int size);
        Array(const Array &array);

        Array &operator=(const Array &array);
        
        T& operator[](unsigned int index){
            if (index >= _size)
                throw std::exception();
            return (_data[index]);
        };
        const T& operator[](unsigned int index) const{
            if (index >= _size)
                throw std::exception();
            return (_data[index]);
        };

    
    private:
    
        T *_data;
        unsigned int _size;
            
};

template <typename T> 
Array<T>::Array() : _data(0), _size(0) {}

template <typename T> 
Array<T>::Array(unsigned int size){
    this->_size = size;
    this->_data = new T[size];
}

template <typename T>
Array<T>::~Array() {
    delete [] _data;
}

template <typename T>
Array<T>::Array(const Array &array){
    _size = array._size; 
    _data = new T[_size];
    for(int i = 0; i < _size; i++){
        this->_data[i] = array._data[i];
    }
}

template<typename T>
Array<T> &Array<T>::operator=(const Array<T> &array){
    if(this != &array){
        delete [] _data;
        _size = array._size;
        _data = new T[_size];
        for (unsigned int i = 0; i < _size; i++)
            _data[i] = array._data[i];
    }
    return (*this);
}