// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/05 20:10:26 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/05 20:10:27 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Squad.hpp"
#include "ISquad.hpp"
#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include <iostream>

int main() {
       ISpaceMarine* bob = new TacticalMarine;
       ISpaceMarine* jim = new AssaultTerminator;

        ISquad* vlc = new Squad;

        vlc->push(bob);
        vlc->push(jim);

       for (int i = 0; i < vlc->getCount(); ++i)
        {
            ISpaceMarine* cur = vlc->getUnit(i);
            cur->battleCry();
            cur->rangedAttack();
            cur->meleeAttack();
        }
        
        delete vlc;
        return 0;
 }