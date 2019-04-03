// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Zombie.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/02 13:03:29 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/02 13:03:30 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Zombie.hpp"
#include <string>
#include <iostream>

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type)
{
    std::cout << "Hey zombie  " << this->_name << " (" << this->_type << ")" << std::endl;
}
Zombie::~Zombie(void)
{
    std::cout << "Bye, zombie  " << this->_name << " (" << this->_type << ")" << std::endl;
}

void Zombie::announce(void){
    std::cout << "<" << this->_name << " (" << this->_type <<
    ")> Braiiiiiiinnnssss..." << std::endl;
}
