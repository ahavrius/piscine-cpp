// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   EnemyHorizontal.cpp                                :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/06 19:53:15 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/06 19:53:16 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "EnemyHorizontal.hpp"
#include "SpaceEntity.hpp"


void	EnemyHorizontal::death(void){
	this->SpaceEntity::death();

	this->_health = HP_ENEMY_H;
	this->_x = SpaceEntity::randomDot(1, MAX_X - this->_form->size() - 1);
	this->_y = SpaceEntity::randomDot(0, HORIZ) * (MAX_Y / (HORIZ + 1)) + 1;
}

EnemyHorizontal::EnemyHorizontal(void): SpaceEntity(1, 1, 1, 0, 7, 1, new std::string("(|---(O)---|)"), true) {

	this->_health = HP_ENEMY_H;
	this->_x = SpaceEntity::randomDot(1, MAX_X - this->_form->size() - 1);
	this->_y = SpaceEntity::randomDot(0, HORIZ) * (MAX_Y / (HORIZ + 1)) + 1;
}

EnemyHorizontal::EnemyHorizontal(const EnemyHorizontal &copy) {
	*this = copy;
	return;
}

EnemyHorizontal::~EnemyHorizontal(void) {
	return;
}

EnemyHorizontal &EnemyHorizontal::operator=(const EnemyHorizontal &rhs) {
	this->SpaceEntity::operator=(rhs);
	return *this;
}

 void		EnemyHorizontal::nearBorder(void){
	 this->_x_shift *= -1;
	 this->_x += this->_x_shift;
 }

