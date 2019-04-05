// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   AWeapon.cpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/05 12:56:34 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/05 12:56:35 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <string>
#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage){
    this->name_ = name;
    this->apcost_ = apcost;
    this->damage_ = damage;
}

AWeapon::AWeapon(AWeapon const & other){
    *this = other;
}
AWeapon::AWeapon(){}

AWeapon& AWeapon::operator=(AWeapon const &other){
    this->name_ = other.getName();
    this->apcost_ = other.getAPCost();
    this->damage_ = other.getDamage();    
    return *this;
}
std::string const & AWeapon::getName() const{
    return this->name_;
}
int AWeapon::getAPCost() const{
    return this->apcost_;
}
int AWeapon::getDamage() const{
    return this->damage_;
}
AWeapon::~AWeapon(){}