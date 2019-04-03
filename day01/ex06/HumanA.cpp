// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanA.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/02 17:07:32 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/02 17:07:32 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <string>
#include <iostream>
#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(std::string n, Weapon& w): _name(n), _weapon(w) {
}

HumanA::~HumanA(void){}

void HumanA::attack(void) const {
    std::cout << this->_name;
    std::cout << " attacks with his ";
    std::cout << this->_weapon.type <<std::endl;
}