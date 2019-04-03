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

Zombie::Zombie()
{
    this->name = "anonymous";
    this->type = "normal";
    //std::cout << "Hey zombie  "  << std::endl;
}
Zombie::~Zombie(void)
{
    //std::cout << "Bye, zombie  " << std::endl;
}

void Zombie::announce(void){
    std::cout << "<" << this->name << " (" << this->type <<
    ")> Braiiiiiiinnnssss..." << std::endl;
}
