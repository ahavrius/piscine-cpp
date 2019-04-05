// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   FragTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/04 09:51:25 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/04 09:51:25 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "FragTrap.hpp"
#include <iostream>
#include <string>

FragTrap::FragTrap(void){
    std::cout << "Constructor without param ";
    std::cout << "You're the wub to my dub" << std::endl;
    name_ = "anonymous";
    hit_point_ = 100;
    max_hit_point_ = 100;
    energy_points_ = 100;
    max_energy_points_ = 100;
    level_ = 1;
    melee_damage_ = 30;
    ranged_damage_ = 20;
    armor_reduction_ = 5;
}

FragTrap::FragTrap(std::string str){
    std::cout << "Constructor with string ";
    std::cout << "You're the wub to my dub" << std::endl;
    name_ = str;
    hit_point_ = 100;
    max_hit_point_ = 100;
    energy_points_ = 100;
    max_energy_points_ = 100;
    level_ = 1;
    melee_damage_ = 30;
    ranged_damage_ = 20;
    armor_reduction_ = 5;
}

FragTrap::FragTrap(FragTrap const &copy){
    std::cout << "Constructor copy ";
    std::cout << "You're the wub to my dub" << std::endl;
    *this = copy;
}
FragTrap& FragTrap::operator=(FragTrap const &other){
    std::cout << "operator =" << std::endl;
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
FragTrap::~FragTrap(void){
    std::cout << " I'll die ....  in silence" << std::endl;
}

void    FragTrap::rangeAttack(std::string const & target){
    std::cout << "FR4G-TP " << this->name_;
    std::cout << " attacks " << target;
    std::cout << " at range, causing " << this->ranged_damage_;
    std::cout << " points of damage !" << std::endl;
}

void    FragTrap::meleeAttack(std::string const & target){
    std::cout << "FR4G-TP " << this->name_;
    std::cout << " attacks " << target;
    std::cout << " at melee, causing " << this->melee_damage_;
    std::cout << " points of damage !" << std::endl;
}

void    FragTrap::comboAttack(std::string const & target){
    std::cout << "FR4G-TP " << this->name_;
    std::cout << " attacks " << target;
    std::cout << " combo, causing " << this->melee_damage_/2;
    std::cout << " points of damage !" << std::endl;
}
void    FragTrap::flyAttack(std::string const & target){
    std::cout << "FR4G-TP " << this->name_;
    std::cout << " attacks " << target;
    std::cout << " flying, causing " << this->melee_damage_ + this->ranged_damage_;
    std::cout << " points of damage !" << std::endl;
}
void    FragTrap::bombAttack(std::string const & target){
    std::cout << "FR4G-TP " << this->name_;
    std::cout << " attacks " << target;
    std::cout << " with bombs, causing " << this->ranged_damage_/2;
    std::cout << " points of damage !" << std::endl;
}

void    FragTrap::takeDamage(unsigned int amount){
    amount -= this->armor_reduction_;
    amount *= (amount > 0);
    this->hit_point_ -= amount;
    this->hit_point_ *= (this->hit_point_ > 0);
    std::cout << "taking " << amount << " damage ";
    std::cout << "current hp = " << this->hit_point_ <<std::endl;
}

void    FragTrap::beRepaired(unsigned int amount){
    if (this->hit_point_ + (int)amount > this->max_hit_point_)
        this->hit_point_ = this->max_hit_point_;
    else
        this->hit_point_ += amount;
    
    std::cout << "repairing " << amount << " hp ";
    std::cout << "current hp = " << this->hit_point_ <<std::endl;
}

void    FragTrap::vaulthunter_dot_exe(std::string const & target){
    static  attacks_t   Attacks[] = {&FragTrap::rangeAttack, &FragTrap::meleeAttack, &FragTrap::comboAttack, &FragTrap::flyAttack, &FragTrap::bombAttack};
        
    if (this->energy_points_ < 25){
        std::cout << "lack of energy" << std::endl;
        this->energy_points_ = 0;
        return ;    
    }
    int i = (rand() % 5); 
    this->energy_points_ -= 25;
    (this->*Attacks[i])(target);

}