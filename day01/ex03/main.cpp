// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/02 13:04:20 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/02 13:04:21 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Zombie.hpp"
#include "ZombieHorde.hpp"
#include <time.h>

int main(void){
    srand (time(NULL));
    ZombieHorde zzzz = ZombieHorde(5);

    zzzz.announce();    

    return 0;
}
