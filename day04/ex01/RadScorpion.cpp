// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   RadScorpion.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/05 12:58:37 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/05 12:58:37 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Enemy.hpp"
#include "RadScorpion.hpp"
#include <iostream>

RadScorpion::RadScorpion(void): Enemy(80, "RadScorpion"){
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const &other): Enemy(other){
    std::cout << "* click click click *" << std::endl;
}
RadScorpion& RadScorpion::operator=(RadScorpion const &other){
    this->Enemy::operator=(other);
    return *this;
}
RadScorpion::~RadScorpion(){
    std::cout << "* SPROTCH *" << std::endl;
}
void RadScorpion::takeDamage(int damage){
    this->Enemy::takeDamage(damage);
}