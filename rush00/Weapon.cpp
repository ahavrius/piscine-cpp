// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Weapon.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/06 22:28:52 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/06 22:28:53 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Weapon.hpp"
#include "SpaceEntity.hpp"

void	Weapon::death(void){
	this->SpaceEntity::death();

	this->_health = HP_WEAPON;
	this->_x = -1;
	this->_y = -1;
	this->_color = 8;
}

Weapon::Weapon(void): SpaceEntity(1, 1, 0, 1, 8, 1, new std::string("||"), false) {}

Weapon::Weapon(int x, int y, int direction): SpaceEntity(x, y, 0, -direction, 4, 1,  NULL, false){

	if (direction > 0){
		this->_form =  new std::string("||");
		this->_color = 4;
	}
	else
	{
		this->_form =  new std::string("*");
		this->_color = 1;
	}
	
	this->_health = HP_WEAPON;
	this->_health = direction;
}

Weapon::Weapon(const Weapon &copy) {
	*this = copy;
	return;
}
Weapon::~Weapon(void) {
	return;
}
Weapon &Weapon::operator=(const Weapon &rhs) {
	this->SpaceEntity::operator=(rhs);
	return *this;
}

void Weapon::nearBorder(void){
	this->_x = -1;
	this->_y = -1;
	this->_color = 8;
	this->_y_shift = 0;
}
