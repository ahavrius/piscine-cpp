// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Base.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/10 21:57:00 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/10 21:57:01 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Base.hpp"

Base::Base() {}

Base::Base(Base const &){
}

Base::~Base(){}

Base& Base::operator=(Base const&){
    return *this;
}