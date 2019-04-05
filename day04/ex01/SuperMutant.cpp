// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   SuperMutant.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/05 12:57:54 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/05 12:57:54 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include <iostream>

SuperMutant::SuperMutant(void): Enemy(170, "Super Mutant"){
    std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &other): Enemy(other){
    std::cout << "Gaaah. Me want smash heads !" << std::endl;
}
SuperMutant& SuperMutant::operator=(SuperMutant const &other){
    this->Enemy::operator=(other);
    return *this;
}
SuperMutant::~SuperMutant(){
    std::cout << "Aaargh ..." << std::endl;
}
void SuperMutant::takeDamage(int damage){
    this->Enemy::takeDamage(damage - 3);
}