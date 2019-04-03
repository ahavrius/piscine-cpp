// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Pony.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/02 12:24:35 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/02 12:24:35 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Pony.hpp"
#include <iostream>

Pony::Pony(std::string a1, std::string a2) : _name(a1), _color(a2) {
    std::cout << this->_color << " pony " << this->_name << " has born" << std::endl;
}

Pony::~Pony(void){
    std::cout << this->_color << " pony " << this->_name << " is dead" << std::endl;
}

void Pony::ponyPlay(void){
    std::cout << this->_color << " pony " << this->_name << " is playing" << std::endl;
}

void Pony::ponyWalk(void){
    std::cout << this->_color << " pony " << this->_name << " is walking around" << std::endl;
}
