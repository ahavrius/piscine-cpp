// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   SuperTrap.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/04 15:21:10 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/04 15:21:11 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <string>
#include "NinjaTrap.hpp"
#include "FragTrap.hpp"
#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void): FragTrap(), NinjaTrap() {
    std::cout << "Constructor without param of SuperTrap" << std::endl;
    ClapTrap::setAll(100, 100, 120, 120, 60, 20, 5);
}

SuperTrap::SuperTrap(std::string str): FragTrap(str), NinjaTrap(str){
    std::cout << "Constructor with string of SuperTrap" << std::endl;
    ClapTrap::setAll(100, 100, 120, 120, 60, 20, 5);
}

SuperTrap::SuperTrap(SuperTrap const &copy): FragTrap(copy), NinjaTrap(copy){
    *this = copy;
    std::cout << "Constructor copy of SuperTrap" << std::endl;
}
SuperTrap& SuperTrap::operator=(SuperTrap const &other){
    std::cout << "operator =    SuperTrap" << std::endl;
    this->ClapTrap::operator= (other);

    return *this;    
}

SuperTrap::~SuperTrap(void){
    std::cout << " I'll die ....  SuperTrap" << std::endl;
}

void    SuperTrap::rangeAttack(std::string const & target){
    FragTrap::rangeAttack(target);
}
void    SuperTrap::meleeAttack(std::string const & target){
    NinjaTrap::meleeAttack(target);
}