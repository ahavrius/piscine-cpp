// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   C.cpp                                              :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/10 21:57:48 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/10 21:57:48 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "C.hpp"

C::C() {}

C::C(C const &){
}

C::~C(){}

C& C::operator=(C const&){
    return *this;
}