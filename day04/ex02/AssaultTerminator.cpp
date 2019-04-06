// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   AssaultTerminator.cpp                              :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/05 20:09:10 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/05 20:09:11 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "AssaultTerminator.hpp"
#include <iostream>

AssaultTerminator::AssaultTerminator(void){
    std::cout << "* teleports from space *" << std::endl;
}
AssaultTerminator::AssaultTerminator(AssaultTerminator const & copy) {
    std::cout << "* teleports from space *" << std::endl;
    *this = copy;
}
AssaultTerminator::~AssaultTerminator(void){
    std::cout << "I'll be back ..." << std::endl;
}
AssaultTerminator& AssaultTerminator::operator=(AssaultTerminator const &){
    return *this;
}
ISpaceMarine* AssaultTerminator::clone() const{
    AssaultTerminator * new_marina = new AssaultTerminator(*this);
    return new_marina;
}
void AssaultTerminator::battleCry() const{
    std::cout << "This code is unclean. PURIFY IT !" << std::endl;
}
void AssaultTerminator::rangedAttack() const{
    std::cout << "* does nothing *" << std::endl;
}
void AssaultTerminator::meleeAttack() const{
    std::cout << "* attacks with chainfists *" << std::endl;
}