// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Character.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/05 23:06:32 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/05 23:06:32 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ICharacter.hpp"
#include "Character.hpp"
#include <iostream>
#include <string>

Character::Character(){}

Character::Character(std::string const &name) : _name(name)
{
	this->_mat[0] = NULL;
	this->_mat[1] = NULL;
	this->_mat[2] = NULL;
	this->_mat[3] = NULL;
}

Character::Character(Character &obj)
{
    for(int i = 0; i < 4; i++)
        this->_mat[0] = NULL;
    *this = obj;
}

void Character::deleteMateria(void){
    int i = -1;

	while (++i < 4)
		if (this->_mat[i] != NULL)
        {
			delete this->_mat[i];
            this->_mat[i] = NULL;
        }
}

Character::~Character(void)
{
	deleteMateria();
}

Character &Character::operator=(Character const &other) 
{
  	deleteMateria();

	this->_name = other._name;
    for(int i = 0; i < 4; i++)
        if (other._mat[i] != NULL)
            this->_mat[i] = other._mat[i]->clone();            
  
	return (*this);
}

std::string const & Character::getName() const
{
	return (_name);
}

void 				Character::equip(AMateria* obj)
{
	int	 i = 0;

	while (i < 4)
	{
		if (this->_mat[i] == NULL)
		{
			this->_mat[i] = obj;
			i = 5;
		}
		i++;
	}
	if (i == 4)
		std::cout << "You cannot equip anymore materias." << std::endl;
	return;
}

void 				Character::unequip(int i)
{
	if (this->_mat[i] == NULL)
		std::cout << "You have nothing equipped there." << std::endl;
	else
		this->_mat[i] = NULL;
	return;
}

void 				Character::use(int i, ICharacter& target)
{
	if (i >= 0 && i <= 3 && this->_mat[i] != NULL)
		this->_mat[i]->use(target);
	else
		std::cout << "There is no materia equipped here." << std::endl;

}