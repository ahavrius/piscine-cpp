// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Sorcerer.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/05 10:17:39 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/05 10:17:40 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include <string>
#include <iostream>

Sorcerer::Sorcerer(std::string name, std::string title): name_(name), title_(title){
    std::cout << this->name_ << ", " << this->title_ << ", is born !" <<std::endl;
}
Sorcerer::Sorcerer(Sorcerer const &other){
    *this = other;
    std::cout << this->name_ << ", " << this->title_ << ", is born !" <<std::endl;
}
Sorcerer::~Sorcerer(void){
    std::cout << this->name_ << ", " << this->title_ << ", is dead. Consequences will never be the same !" << std::endl;
}

Sorcerer& Sorcerer::operator=(Sorcerer const &other){
    this->name_ = other.name_;
    this->title_ = other.title_;
    return *this;
}
std::string Sorcerer::getName(void) const {
    return this->name_;
}
std::string Sorcerer::getTitle(void) const {
    return this->title_;
}

std::ostream& operator<<(std::ostream &o, Sorcerer const &other){
    o << "I am " << other.getName() << ", " << other.getTitle() << ", and I like ponies !" << std::endl;
    return o;
}

void Sorcerer::polymorph(Victim const &little_victim) const{
    little_victim.getPolymorphed();
}
