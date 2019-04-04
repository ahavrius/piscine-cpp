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

#include "FragTrap.hpp"
#include <iostream>
#include <string>
#include <time.h>       

int main(void)
{
    srand (time(NULL));

    FragTrap unit1("unt one");
    FragTrap unit2;
    
    unit2 = FragTrap("unit two");

    unit1.vaulthunter_dot_exe("unit 2");
    unit2.takeDamage(30);
    unit1.vaulthunter_dot_exe("bird");
    unit1.vaulthunter_dot_exe("cat");
    unit1.vaulthunter_dot_exe("dog");
    unit1.vaulthunter_dot_exe("bird2");
    unit1.vaulthunter_dot_exe("bird3");

    return 0;
}