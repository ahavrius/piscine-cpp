// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Human.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/02 20:12:27 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/02 20:12:28 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Human.hpp"
#include <iostream>
#include <string>

void Human::meleeAttack(std::string const & target){
    std::cout << "melee attack the " << target << std::endl;
}

void Human::rangedAttack(std::string const & target){
    std::cout << "ranged attack the " << target << std::endl;
}
void Human::intimidatingShout(std::string const & target){
    std::cout << "intimidating shout the " << target << std::endl;
}



void Human::action(std::string const & action_name, std::string const & target){
    static actions actionsHuman[3] = {&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout};
    static std::string actionsName[3] = {"meleeAttack", "rangedAttack", "intimidatingShout"};
    
    for (int i = 0; i < 3; i++)
        if (action_name.compare(actionsName[i]) == 0)
            (this->*actionsHuman[i])(target);
}