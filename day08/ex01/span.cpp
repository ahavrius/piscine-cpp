// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   span.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/13 12:27:42 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/13 12:27:42 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "span.hpp"
#include <algorithm>
#include <vector>
#include<iostream> 

Span:: Span(): _n(0){}
Span:: Span(Span &): _n(0){}
Span & Span::operator=(Span &){
    return *this;
}
Span::Span(int n): _n(n*(n > 0)){
    if (_n != 0)
        _arr = std::vector<int>(_n, 0);
    _n_current = 0;
}

Span:: ~Span(){}

int Span::shortestSpan(){
    std::vector<int> be_sorted = _arr;
    std::sort(be_sorted.begin(), be_sorted.end());
    
    int min_range = be_sorted[1] - be_sorted[0];

    for(std::vector<int>::iterator i = be_sorted.begin() + 1; i < be_sorted.end(); i++)
        if (*i - *(i-1) > min_range)
            min_range = *i - *(i-1);
    return min_range;
}

int Span::longestSpan(){
    if (_n_current <= 1)
        throw "array is too short";
    std::pair<std::vector<int>::iterator, std::vector<int>::iterator> range;
    
    range  = std::minmax_element(_arr.begin(), _arr.end());
    return (*range.second - *range.first);
}

void Span::addNumber(int value){
    if (_n_current == _n)
        throw "array is already full";
    _arr[_n_current] = value;
    _n_current++;
}