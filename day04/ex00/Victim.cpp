// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Victim.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/05 10:18:13 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/05 10:18:14 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <string>
#include "Victim.hpp"

Victim::Victim(std::string name): name_(name){
    std::cout << "Some random victim called " << this->name_ << " just popped !" << std::endl;
}
Victim::Victim(Victim const &other){
    *this = other;
    std::cout << "Some random victim called " << this->name_ << " just popped !" << std::endl;
}
Victim::~Victim(void){
    std::cout << "Victim " << this->name_ << "just died for no apparent reason !" << std::endl;
}

Victim& Victim::operator=(Victim const &other){
    this->name_ = other.name_;
    return *this;
}
std::string Victim::getName(void) const {
    return this->name_;
}

std::ostream& operator<<(std::ostream &o, Victim const &other){
    o << "I am " << other.getName()  << ", and I like otters !" << std::endl;
    return o;
}

void Victim::getPolymorphed() const{
    std::cout << this->name_ << " has been turned into a cute little sheep !" << std::endl;
}