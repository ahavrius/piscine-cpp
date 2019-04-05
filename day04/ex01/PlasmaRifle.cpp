// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PlasmaRifle.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/05 12:56:59 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/05 12:56:59 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include <iostream>

PlasmaRifle::PlasmaRifle(void): AWeapon("Plasma Rifle", 5, 21){}
PlasmaRifle::~PlasmaRifle(){}
PlasmaRifle::PlasmaRifle(PlasmaRifle const &other): AWeapon(other){}

PlasmaRifle& PlasmaRifle::operator=(PlasmaRifle const &other){
    this->AWeapon::operator=(other);
    return *this;
}

void PlasmaRifle::attack() const{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
