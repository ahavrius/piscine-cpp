// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   TacticalMarine.cpp                                 :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/05 20:08:51 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/05 20:08:52 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "TacticalMarine.hpp"
#include <iostream>

TacticalMarine::TacticalMarine(void){
    std::cout << "Tactical Marine ready for battle" << std::endl;
}
TacticalMarine::TacticalMarine(TacticalMarine const & copy) {
    std::cout << "Tactical Marine ready for battle" << std::endl;
    *this = copy;
}
TacticalMarine::~TacticalMarine(void){
    std::cout << "Aaargh ..." << std::endl;
}
TacticalMarine& TacticalMarine::operator=(TacticalMarine const &){
    return *this;
}
ISpaceMarine* TacticalMarine::clone() const{
    TacticalMarine * new_marina = new TacticalMarine(*this);
    return new_marina;
}
void TacticalMarine::battleCry() const{
    std::cout << "For the holy PLOT !" << std::endl;
}
void TacticalMarine::rangedAttack() const{
    std::cout << "* attacks with bolter *" << std::endl;
}
void TacticalMarine::meleeAttack() const{
    std::cout << "* attacks with chainsword *" << std::endl;
}