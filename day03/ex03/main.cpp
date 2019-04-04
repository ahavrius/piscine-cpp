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

#include <iostream>
#include <string>
#include <time.h>       

int main(void)
{
    srand (time(NULL));
    ClapTrap unit0("basic");
    FragTrap unit1("unt one");
    ScavTrap unit2("unt two");
    FragTrap unit3;
    NinjaTrap  ninja("*secret*");


    unit3 = unit1;
    unit3.vaulthunter_dot_exe("eeeex");
    ninja.ninjaShoebox(unit0);
    ninja.ninjaShoebox(unit1);
    ninja.ninjaShoebox(unit2);
    ninja.ninjaShoebox(ninja);

    return 0;
}