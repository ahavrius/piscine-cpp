// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/05 12:59:23 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/05 12:59:23 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <string>
#include "AWeapon.hpp"
#include "Character.hpp"
#include "Enemy.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"

int main() {
        Character* zaz = new Character("zaz");

        std::cout << *zaz;
        
        Enemy* b = new RadScorpion();
        AWeapon* pr = new PlasmaRifle();
        AWeapon* pf = new PowerFist();
        
        zaz->equip(pr);
        std::cout << *zaz;
        zaz->equip(pf);
        
        zaz->attack(b);
        std::cout << *zaz;
        zaz->equip(pr);
        std::cout << *zaz;
        zaz->attack(b);
        std::cout << *zaz;
        zaz->attack(b);
        std::cout << *zaz;
      
        return 0;
}