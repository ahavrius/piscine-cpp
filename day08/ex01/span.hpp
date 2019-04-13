// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   span.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/13 12:27:59 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/13 12:27:59 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>

class Span{
    std::vector<int>  _arr;
    const int       _n;
    int             _n_current;

    Span();
    Span(Span &);
    Span & operator=(Span &);
public:
    Span(int);
    ~Span();

    int shortestSpan();
    int longestSpan();
    void    addNumber(int);
};


#endif