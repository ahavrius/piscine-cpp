// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PowerFist.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/05 12:57:19 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/05 12:57:19 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "AWeapon.hpp"
#include "PowerFist.hpp"
#include <iostream>

PowerFist::PowerFist(void): AWeapon("Power Fist", 8, 50){}
PowerFist::~PowerFist(){}
PowerFist::PowerFist(PowerFist const &other): AWeapon(other){}

PowerFist& PowerFist::operator=(PowerFist const &other){
    this->AWeapon::operator=(other);
    return *this;
}

void PowerFist::attack() const{
    std::cout << "* pschhh... SBAM! *" << std::endl;
}

