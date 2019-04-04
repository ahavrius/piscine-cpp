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

#include <iostream>
#include <string>
#include <time.h>       

int main(void)
{
    srand (time(NULL));

    FragTrap unit1_1("unt one");
    FragTrap unit2_1;
    
    unit2_1 = FragTrap("unit two");

    unit1_1.vaulthunter_dot_exe("unit 2");
    unit2_1.takeDamage(30);
    unit1_1.vaulthunter_dot_exe("bird");
    unit1_1.vaulthunter_dot_exe("cat");
    unit1_1.vaulthunter_dot_exe("dog");
    unit1_1.vaulthunter_dot_exe("bird2");
    unit1_1.vaulthunter_dot_exe("bird3");

    ScavTrap unit1_2("unt one");
    ScavTrap unit2_2;
    
    unit2_2 = ScavTrap("unit two");

    unit1_2.challengeNewcomer("unit 2");
    unit2_2.takeDamage(30);
    unit1_2.challengeNewcomer("bird");
    unit1_2.challengeNewcomer("cat");
    unit1_2.challengeNewcomer("dog");

    return 0;
}