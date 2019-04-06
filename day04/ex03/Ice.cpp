// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Ice.cpp                                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/05 23:05:55 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/05 23:05:56 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Ice.hpp"
#include <iostream>

Ice::Ice(void): AMateria("ice"){}

Ice::Ice(std::string const &type) : AMateria(type){}

Ice::Ice(Ice const &obj)
{
	*this = obj;
	return;
}
Ice::~Ice(void) {}

Ice &Ice::operator=(Ice const &other) 
{
	this->type_ = other.type_;
	return (*this);
}

Ice*		Ice::clone(void) const{
    Ice * new_ice = new Ice("ice");

    return new_ice;
}


void					Ice::use(ICharacter&target)
{
    this->AMateria::use(target);
    std::cout << "* shoots an Ice bolt at " << target.getName() << " *" << std::endl;
	return;
}
