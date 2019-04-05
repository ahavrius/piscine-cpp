// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Enemy.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/05 12:57:35 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/05 12:57:35 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <string>
#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type): type_(type),  hp_(hp){}
Enemy::~Enemy(){}

Enemy::Enemy(Enemy const & other){
    *this = other;
}
Enemy& Enemy::operator=(Enemy const &other){
    this->hp_ = other.getHP();
    this->type_ = other.getType();
    return *this;
}
std::string const & Enemy::getType() const{
    return this->type_;
}
int Enemy::getHP() const{
    return this->hp_;
}

void    Enemy::takeDamage(int damage){
    if (damage < 0)
        return ;
    this->hp_ -=damage;
    this->hp_ *= (this->hp_ > 0);
}