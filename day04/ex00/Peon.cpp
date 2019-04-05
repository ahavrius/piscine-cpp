// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Peon.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/05 10:18:31 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/05 10:18:31 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <string>
#include <iostream>
#include "Peon.hpp"
#include "Victim.hpp"

Peon::Peon(std::string name): Victim(name){
    std::cout << "Zog zog." << std::endl;
}
Peon::Peon(Peon const &other): Victim(other){
    std::cout << "Zog zog." << std::endl;
}
Peon::~Peon(void){
    std::cout << "Bleuark.." << std::endl;
}

Peon& Peon::operator=(Peon const &other){
    this->Victim::operator= (other);
    return *this;
}

void Peon::getPolymorphed() const{
    std::cout << this->getName() << " has been turned into a pink pony !" << std::endl;
}
