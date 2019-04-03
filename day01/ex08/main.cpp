// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/02 20:12:38 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/02 20:12:38 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "Human.hpp"

int main()
{
    Human bob;

    bob.action("meleeAttack", "cat");
    bob.action("rangedAttack", "dog");
    bob.action("intimidatingShout", "bird");


    return 0;
}