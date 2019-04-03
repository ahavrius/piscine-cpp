// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Human.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/02 16:17:13 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/02 16:17:13 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Human.hpp"

std::string Human::identify(void){
    return this->this_brain.identify();
}

Brain    &  Human::getBrain(void){
    return this->this_brain;
}