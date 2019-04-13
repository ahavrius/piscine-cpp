// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   mutantstack.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/13 14:24:23 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/13 14:24:24 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <stack>
#include <deque>


template< typename T>
class MutantStack: public std::stack<T>{
    using std::stack<T>::c;

public:
    typedef std::deque<int>::iterator iterator;

    MutantStack(): std::stack<T>(){}
    MutantStack(MutantStack<T> &other){
        *this = other;
    }
    ~MutantStack(){}
    MutantStack<T> & operator=(MutantStack<T> &other){
        this->std::stack<T>::operator=(other);
        return *this;
    }

    iterator begin(){       return std::begin(c);}
    iterator end(){         return std::end(c);} 
};

#endif
