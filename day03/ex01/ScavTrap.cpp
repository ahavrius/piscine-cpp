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
#include <iostream>
#include <string>

ScavTrap::ScavTrap(void){
    std::cout << "Constructor without param ";
    std::cout << "Scav" << std::endl;
    name_ = "anonymous";
    hit_point_ = 100;
    max_hit_point_ = 100;
    energy_points_ = 50;
    max_energy_points_ = 50;
    level_ = 1;
    melee_damage_ = 20;
    ranged_damage_ = 15;
    armor_reduction_ = 3;
}

ScavTrap::ScavTrap(std::string str){
    std::cout << "Constructor with string ";
    std::cout << "Scav" << std::endl;
    name_ = str;
    hit_point_ = 100;
    max_hit_point_ = 100;
    energy_points_ = 50;
    max_energy_points_ = 50;
    level_ = 1;
    melee_damage_ = 20;
    ranged_damage_ = 15;
    armor_reduction_ = 3;
}

ScavTrap::ScavTrap(ScavTrap const &copy){
    std::cout << "Constructor copy ";
    std::cout << "Scav" << std::endl;
    *this = copy;
}
ScavTrap& ScavTrap::operator=(ScavTrap const &other){
    std::cout << "operator =    Scav" << std::endl;
    this->name_ = other.name_;
    this->hit_point_ = other.hit_point_;
    this->max_hit_point_ = other.max_hit_point_;
    this->energy_points_ = other.energy_points_;
    this->max_energy_points_ = other.max_energy_points_;
    this->level_ = other.level_;
    this->melee_damage_ = other.melee_damage_;
    this->ranged_damage_ = other.ranged_damage_;
    this->armor_reduction_ = other.armor_reduction_;

    return *this;    
}
ScavTrap::~ScavTrap(void){
    std::cout << " I'll die ....  in silence  Scav" << std::endl;
}

void    ScavTrap::rangeAttack(std::string const & target){
    std::cout << "FR4G-TP " << this->name_;
    std::cout << " attacks " << target;
    std::cout << " at range, causing " << this->ranged_damage_;
    std::cout << " points of damage !" << std::endl;
}

void    ScavTrap::meleeAttack(std::string const & target){
    std::cout << "FR4G-TP " << this->name_;
    std::cout << " attacks " << target;
    std::cout << " at melee, causing " << this->melee_damage_;
    std::cout << " points of damage !" << std::endl;
}

void    ScavTrap::comboAttack(std::string const & target){
    std::cout << "FR4G-TP " << this->name_;
    std::cout << " attacks " << target;
    std::cout << " combo, causing " << this->melee_damage_/2;
    std::cout << " points of damage !" << std::endl;
}
void    ScavTrap::flyAttack(std::string const & target){
    std::cout << "FR4G-TP " << this->name_;
    std::cout << " attacks " << target;
    std::cout << " flying, causing " << this->melee_damage_ + this->ranged_damage_;
    std::cout << " points of damage !" << std::endl;
}
void    ScavTrap::bombAttack(std::string const & target){
    std::cout << "FR4G-TP " << this->name_;
    std::cout << " attacks " << target;
    std::cout << " with bombs, causing " << this->ranged_damage_/2;
    std::cout << " points of damage !" << std::endl;
}

void    ScavTrap::takeDamage(unsigned int amount){
    amount -= this->armor_reduction_;
    amount *= (amount > 0);
    this->hit_point_ -= amount;
    this->hit_point_ *= (this->hit_point_ > 0);
    std::cout << "Scav's taking " << amount << " damage ";
    std::cout << "current hp = " << this->hit_point_ <<std::endl;
}

void    ScavTrap::beRepaired(unsigned int amount){
    if (this->hit_point_ + (int)amount > this->max_hit_point_)
        this->hit_point_ = this->max_hit_point_;
    else
        this->hit_point_ += amount;
    
    std::cout << "Scav's repairing " << amount << " hp ";
    std::cout << "current hp = " << this->hit_point_ <<std::endl;
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
