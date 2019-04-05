// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClapTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/04 14:03:37 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/04 14:03:38 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

void ClapTrap::setAll(int hp, int max_hp, int ep, int max_ep, int md, int rd, int ar)
{
    this->hit_point_ = hp;
    this->max_hit_point_ = max_hp;
    this->energy_points_ = ep;
    this->max_energy_points_ = max_ep;
    this->melee_damage_ = md;
    this->ranged_damage_ = rd;
    this->armor_reduction_ = ar;
}

ClapTrap::ClapTrap(void){
    std::cout << "Constructor without param of ClapTrap" << std::endl;
    name_ = "anonymous";
    level_ = 1;
    this->setAll(0, 0, 0, 0, 0, 0, 0);
}

ClapTrap::ClapTrap(std::string str){
    std::cout << "Constructor with string of ClapTrap" << std::endl;
    name_ = str;
    level_ = 1;
    this->setAll(0, 0, 0, 0, 0, 0, 0);
}

ClapTrap::ClapTrap(ClapTrap const &copy){
    std::cout << "Constructor copy of ClapTrap" << std::endl;
    *this = copy;
}
ClapTrap& ClapTrap::operator=(ClapTrap const &other){
    std::cout << "operator =  of ClapTrap" << std::endl;
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
ClapTrap::~ClapTrap(void){
    std::cout << " Destructor of ClapTrap" << std::endl;
}

void    ClapTrap::rangeAttack(std::string const & target){
    std::cout << "FR4G-TP " << this->name_;
    std::cout << " attacks " << target;
    std::cout << " at range, causing " << this->ranged_damage_;
    std::cout << " points of damage !" << std::endl;
}

void    ClapTrap::meleeAttack(std::string const & target){
    std::cout << "FR4G-TP " << this->name_;
    std::cout << " attacks " << target;
    std::cout << " at melee, causing " << this->melee_damage_;
    std::cout << " points of damage !" << std::endl;
}

void    ClapTrap::comboAttack(std::string const & target){
    std::cout << "FR4G-TP " << this->name_;
    std::cout << " attacks " << target;
    std::cout << " combo, causing " << (this->melee_damage_ + this->ranged_damage_) / 2;
    std::cout << " points of damage !" << std::endl;
}
void    ClapTrap::flyAttack(std::string const & target){
    std::cout << "FR4G-TP " << this->name_;
    std::cout << " attacks " << target;
    std::cout << " flying, causing " << this->melee_damage_/3;
    std::cout << " points of damage !" << std::endl;
}
void    ClapTrap::bombAttack(std::string const & target){
    std::cout << "FR4G-TP " << this->name_;
    std::cout << " attacks " << target;
    std::cout << " with bombs, causing " << this->melee_damage_/3;
    std::cout << " points of damage !" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount){
    amount -= this->armor_reduction_;
    amount *= (amount > 0);
    this->hit_point_ -= amount;
    this->hit_point_ *= (this->hit_point_ > 0);
    std::cout << "taking " << amount << " damage ";
    std::cout << "current hp = " << this->hit_point_ <<std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount){
    if (this->hit_point_ + (int)amount > this->max_hit_point_)
        this->hit_point_ = this->max_hit_point_;
    else
        this->hit_point_ += amount;
    
    std::cout << "repairing " << amount << " hp ";
    std::cout << "current hp = " << this->hit_point_ <<std::endl;
}
