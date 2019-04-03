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
#include "ZombieEvent.hpp"
#include <time.h>

Zombie* newZombie(std::string name){
    Zombie *new_zombie = new Zombie(name, ZombieEvent::type);
    return new_zombie;
}

void    randomChump(void)
{
    std::string name = "-----";
    int         len = name.length();
    static const char alphanum[] =
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < len; ++i)
        name[i] = alphanum[rand() % (sizeof(alphanum) - 1)];
    Zombie  zombie = Zombie(name, ZombieEvent::type);
    zombie.announce();
}

int main(void){
    srand (time(NULL));
    Zombie *new_one = newZombie("Terry");
    ZombieEvent::setZombieType("crazy");

    randomChump();
    new_one->announce();
    randomChump();

    delete new_one;
    return 0;
}
