// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Character.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/05 12:58:53 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/05 12:58:54 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <string>
#include "Character.hpp"
#include "AWeapon.hpp"
#include "Enemy.hpp"
#include <iostream>

Character::Character(){}
Character::~Character(){}

Character::Character(std::string const & name): name_(name), ap_(40), weapon_(NULL){}

Character::Character(Character const & other){
    *this = other;
}
Character& Character::operator=(Character const &other){
    this->name_ = other.name_;
    this->ap_ = other.ap_;
    this->weapon_ = other.weapon_;    
    
    return *this;
}
std::ostream& operator<<(std::ostream &o, Character const &member){
    if (member.getWeapon() == NULL)
        o << member.getName() << " has " <<member.getAP() << " AP and is unarmed" << std::endl;
    else
        o << member.getName() << " has " <<member.getAP() << " AP and wields a " << member.getWeapon()->getName() << std::endl;

    return o;
}

std::string const & Character::getName() const{
    return this->name_;
}
int Character::getAP() const{
    return this->ap_;
}
AWeapon* Character::getWeapon() const{
    return this->weapon_;
}

void Character::recoverAP(){
    this->ap_ = (this->ap_ + 10 > 40) ? 40 : this->ap_ + 10;
}
void Character::equip(AWeapon* weapon){
    this->weapon_ = weapon;
}
void Character::attack(Enemy* enemy){
    if (this->weapon_ == NULL || this->ap_ < this->weapon_->getAPCost())
        return ;
    this->ap_ -= this->weapon_->getAPCost();
    std::cout << this->name_ << " attacks " << enemy->getType() << "with a " << this->weapon_->getName() << std::endl;
    this->weapon_->attack();
    enemy->takeDamage(this->weapon_->getDamage());
    if (enemy->getHP() == 0)
    {
        delete enemy;
        enemy = NULL;
    }
}
