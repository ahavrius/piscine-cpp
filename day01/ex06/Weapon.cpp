// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Weapon.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/02 17:07:03 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/02 17:07:03 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Weapon.hpp"

Weapon::Weapon(std::string type){
    this->type = type;
}
Weapon::~Weapon(void){}

void Weapon::setType(std::string s){
    this->type = s;
}
const std::string & Weapon::getType(void) const{
    return this->type;
}
