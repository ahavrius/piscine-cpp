// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieHorde.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/02 14:30:23 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/02 14:30:24 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

static std::string  randomName(void)
{
    std::string name = "-----";
    int         len = name.length();
    static const char alphanum[] =
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < len; ++i)
        name[i] = alphanum[rand() % (sizeof(alphanum) - 1)];
    return name;
}

ZombieHorde::ZombieHorde(int N){
    this->amount = N;
    this->horde = new Zombie[N];
    for (int i = 0; i < N; ++i)
        this->horde[i].name = randomName();
}

void    ZombieHorde::announce(void){
    for (int i = 0; i < this->amount; ++i)
        this->horde[i].announce();
}

ZombieHorde::~ZombieHorde(void){
    delete [] this->horde;
}
