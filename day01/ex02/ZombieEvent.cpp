// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieEvent.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/02 13:04:08 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/02 13:04:09 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ZombieEvent.hpp"
#include "Zombie.hpp"
#include <string>

void ZombieEvent::setZombieType(std::string type_zombie){
    ZombieEvent::type = type_zombie;
}

std::string ZombieEvent::type = "normal";