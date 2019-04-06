// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   MateriaSource.cpp                                  :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/05 23:06:48 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/05 23:06:48 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <string>

#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) {
    for(int i = 0; i < 4; i++)
        this->_mat[i] = NULL;
    
}

MateriaSource::MateriaSource(MateriaSource &obj){
    *this = obj;
}

void MateriaSource::deleteMateria(void){
    int i = -1;

	while (++i < 4)
		if (this->_mat[i] != NULL)
        {
			delete this->_mat[i];
            this->_mat[i] = NULL;
        }
}

MateriaSource::~MateriaSource(void){
    deleteMateria();
}

MateriaSource &MateriaSource::operator=(MateriaSource const &other) 
{
    deleteMateria();
    for(int i = 0; i < 4; i++)
        if (other._mat[i] != NULL)
            this->_mat[i] = other._mat[i]->clone();            
  
	return (*this);
}

void 		MateriaSource::learnMateria(AMateria *obj)
{
	int i = 0;

	while (i < 4)
	{
		if (this->_mat[i] == NULL)
		{
			// this->_mat[i] = new *AMateria;
			this->_mat[i] = obj;
			i = 5;
		}
		else
			i++;
	}
	if (i == 4)
	{
		std::cout << "There is not enough room to learn a new Materia" << std::endl;
	}
}

AMateria* 	MateriaSource::createMateria(std::string const &type)
{
	int i = 0;
	AMateria *ret;

	while (i < 4)
	{
		if (this->_mat[i] != NULL)
		{
			if (this->_mat[i]->getType() == type)
			{
				ret = this->_mat[i]->clone();
				return (ret);
			}
		}
		i++;
	}
	std::cout << "Materia Type is invalid" << std::endl;
	return (NULL);
}