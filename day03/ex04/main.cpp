// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/04 09:51:46 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/04 09:51:46 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

#include <iostream>
#include <string>
#include <time.h>       

int main(void)
{
    srand (time(NULL));
    SuperTrap   unit_1("hey");
    SuperTrap   unit_2;

    unit_1.rangeAttack("tree");
    unit_1.meleeAttack("TREE");
    
    return 0;
}