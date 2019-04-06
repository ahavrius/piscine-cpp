// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   AMateria.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/05 23:05:33 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/05 23:05:33 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "AMateria.hpp"

AMateria::AMateria(void){}

AMateria::AMateria(std::string const &type) : type_(type), xp_(0){}

AMateria::AMateria(AMateria const &obj)
{
	*this = obj;
	return;
}
AMateria::~AMateria(void) {}

AMateria &AMateria::operator=(AMateria const &other) 
{
	this->type_ = other.type_;
	return (*this);
}
std::string	const		&AMateria::getType(void) const
{
	return (this->type_);
}
unsigned int			AMateria::getXP(void) const
{
	return (this->xp_);
}
void					AMateria::use(ICharacter&)
{
	this->xp_ = this->xp_ + 10;
	return;
}
