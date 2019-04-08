// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   EnemyVertical.cpp                                  :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/06 20:04:29 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/06 20:04:29 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "EnemyVertical.hpp"
#include "SpaceEntity.hpp"

void	EnemyVertical::death(void){
	this->SpaceEntity::death();

	this->_health = HP_ENEMY_V;
	this->_x = SpaceEntity::randomDot(1, MAX_X - this->_form->size()) - 1;
	this->_y = 0;
}

EnemyVertical::EnemyVertical(void): SpaceEntity(1, 1, 0, 1, 3, 0, NULL, false) {
	
	this->_health = HP_ENEMY_V;

	int radius = SpaceEntity::randomDot(1, 3);
	this->_len_chars = (radius > 1) ? 3 : 2;
	this->_form = new std::string [this->_len_chars];
	if (radius == 1)
	{
		this->_form[0] = "##";
		this->_form[0] = "##";
	}
	else if (radius == 2)
	{
		this->_form[0] = " #   ";
		this->_form[1] = "#####";
		this->_form[2] = " ###  ";
	}
	else if (radius == 3)
	{
		this->_form[0] = "  #c";
		this->_form[1] = " ###";
		this->_form[2] = "#O##";
	}	

	this->_x = SpaceEntity::randomDot(1, MAX_X - this->_form->size()) - 1;
	this->_y = SpaceEntity::randomDot(1, MAX_Y - this->_len_chars - MAX_Y/6);

}
 
EnemyVertical::EnemyVertical(const EnemyVertical &copy) {
	*this = copy;
	return;
}

EnemyVertical::~EnemyVertical(void) {
	return;
}

EnemyVertical &EnemyVertical::operator=(const EnemyVertical &rhs) {
	this->SpaceEntity::operator=(rhs);
	return *this;
}

void EnemyVertical::nearBorder(void){
	this->_x = SpaceEntity::randomDot(1, MAX_X - this->_form->size() - 1);
	this->_y = 1;
}