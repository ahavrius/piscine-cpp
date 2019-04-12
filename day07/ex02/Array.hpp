// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Array.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/12 15:38:48 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/12 15:38:48 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <string>

typedef unsigned int t_uint;

template< typename T >
class Array{
    T       *_arr;
    t_uint  _n;

public:
    Array(): _arr(NULL), _n(0){}
    Array(t_uint n): _n(n){
        _arr = new T[n];
        for(t_uint i = 0; i < n; i++)
            _arr[i] = T();
    }

    Array(Array &other): _n(0), _arr(NULL){
        *this = other;
    }
    ~Array(){
        if (_n > 0 && _arr != NULL)
            delete [] _arr;   
    }

    Array<T> & operator=(Array<T> &other){
        if (_n > 0 && _arr != NULL)
            delete [] _arr;
        _n = other.size();
        _arr = new T[_n];
        for(t_uint i = 0; i < _n; i++)
            _arr[i] = other[i];
        return *this;
    }
    T &     operator[](t_uint i) const{
        if (i >= _n)
            throw std::exception();
        return _arr[i];
    }

    t_uint  size() const{
        return _n;
    }
};

#endif