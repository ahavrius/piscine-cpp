// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ScavTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/04 12:55:41 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/04 12:55:41 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>
#include <string>

ScavTrap::ScavTrap(void): ClapTrap(){
    std::cout << "Constructor without param of ScavTrap" << std::endl;
    level_ = 1;
    ClapTrap::setAll(100, 100, 50, 50, 20, 15, 3);
}

ScavTrap::ScavTrap(std::string str): ClapTrap(str){
    std::cout << "Constructor with string of ScavTrap" << std::endl;
    level_ = 1;
    ClapTrap::setAll(100, 100, 50, 50, 20, 15, 3);
}

ScavTrap::ScavTrap(ScavTrap const &copy): ClapTrap(copy){
    std::cout << "Constructor copy of ScavTrap" << std::endl;
}
ScavTrap& ScavTrap::operator=(ScavTrap const &other){
    std::cout << "operator =    Scav" << std::endl;
    this->ClapTrap::operator= (other);

    return *this;    
}
ScavTrap::~ScavTrap(void){
    std::cout << " I'll die ....  Scav" << std::endl;
}

void    ScavTrap::challengeNewcomer(std::string const & target){
    static std::string Asks[] = {"What do you like daydreaming about?", 
    "What makes you happy?", "What have your friends been up to?", 
    "If you could do anything right now, what would you do?", 
    "What do you look forward to when you wake up?"};
    
    std::cout << "Hey, " << target << ", I have a question for you: ";
    int i = (rand() % 5); 
    std::cout << Asks[i] << std::endl;
}