// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ex01.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/02 12:56:41 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/02 12:56:42 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

void memoryLeak() {
    std::string *   panthere = new std::string("String panthere");

    std::cout << *panthere << std::endl;
    delete panthere;
}
