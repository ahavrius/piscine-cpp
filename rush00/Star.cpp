// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Star.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/06 19:48:40 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/06 19:48:41 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Star.hpp"

Star::Star(void): SpaceEntity(0, 0, 0, 3, 0, 1, new std::string("."), false) {
	this->_x = SpaceEntity::randomDot(1, MAX_X - this->_form->size() - 1);
	this->_y = SpaceEntity::randomDot(1, MAX_Y - this->_len_chars - 1);
}
 
Star::Star(const Star &copy) {
	*this = copy;
	return;
}

Star::~Star(void) {
	return;
}

Star &Star::operator=(const Star &rhs) {
	this->SpaceEntity::operator=(rhs);
	return *this;
}

void   Star::nearBorder(){
	this->_x = SpaceEntity::randomDot(1, MAX_X - this->_form->size() - 1);
	this->_y = 1;
    return;
}
