// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Brain.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/02 16:16:49 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/02 16:16:49 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <string>
#include <sstream>
#include "Brain.hpp"

std::string Brain::identify(void){
    std::stringstream address;
    address << this;
    return address.str();   
}
