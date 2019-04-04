// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   NinjaTrap.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/04 14:47:47 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/04 14:47:48 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

NinjaTrap::NinjaTrap(void): ClapTrap(){
    std::cout << "Constructor without param of NinjaTrap" << std::endl;
    ClapTrap::setAll(60, 60, 120, 120, 60, 5, 0);
}

NinjaTrap::NinjaTrap(std::string str): ClapTrap(str){
    std::cout << "Constructor with string of NinjaTrap" << std::endl;
    ClapTrap::setAll(60, 60, 120, 120, 60, 5, 0);
}

NinjaTrap::NinjaTrap(NinjaTrap const &copy): ClapTrap(copy){
    std::cout << "Constructor copy of NinjaTrap" << std::endl;
}
NinjaTrap& NinjaTrap::operator=(NinjaTrap const &other){
    std::cout << "operator =    Ninja" << std::endl;
    ClapTrap::operator= (other);

    return *this;    
}
NinjaTrap::~NinjaTrap(void){
    std::cout << " I'll die ....  Ninja" << std::endl;
}

void    NinjaTrap::ninjaShoebox(ClapTrap &){
    std::cout << "ninjaShoebox ClapTrap" << std::endl;
}
void    NinjaTrap::ninjaShoebox(NinjaTrap &){
    std::cout << "ninjaShoebox NinjaTrap" << std::endl;
}
void    NinjaTrap::ninjaShoebox(ScavTrap &){
    std::cout << "ninjaShoebox ScavTrap" << std::endl;
}
void    NinjaTrap::ninjaShoebox(FragTrap &){
    std::cout << "ninjaShoebox FragTrap" << std::endl;
}
