// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Cure.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/05 23:06:15 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/05 23:06:15 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //


#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Cure.hpp"
#include <iostream>

Cure::Cure(void): AMateria("cure"){}

Cure::Cure(std::string const &type) : AMateria(type){}

Cure::Cure(Cure const &obj)
{
	*this = obj;
	return;
}
Cure::~Cure(void) {}

Cure &Cure::operator=(Cure const &other) 
{
	this->type_ = other.type_;
	return (*this);
}

Cure*		Cure::clone(void) const{
    Cure * new_cure = new Cure("Cure");

    return new_cure;
}


void					Cure::use(ICharacter&target)
{
    this->AMateria::use(target);
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
	return;
}
