// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanB.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/02 17:07:40 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/02 17:07:40 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <string>
#include <iostream>
#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string n){
    this->_name = n;
    this->_weapon = NULL;
}

void HumanB::setWeapon(Weapon& w){
    this->_weapon = &w;
}

HumanB::~HumanB(void){}

void HumanB::attack(void) const {
    std::cout << this->_name;
    std::cout << " attacks with his ";
    std::cout << this->_weapon->type <<std::endl;
}