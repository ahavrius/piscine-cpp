// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/02 12:25:12 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/02 12:25:13 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Pony.hpp"
#include <iostream>
#include <string>


void ponyOnTheHeap(std::string s1){
    Pony *pony_kid = new Pony(s1, "pink");
    pony_kid->ponyPlay();
    delete pony_kid;
}

void ponyOnTheStack(std::string s2){
    Pony pony_kid = Pony("Jassy", s2);
    pony_kid.ponyWalk();
}

int main()
{
    Pony pony_here1 = Pony("Juan", "blue");
    Pony *pony_here2 = new Pony("Kim", "black");

    pony_here1.ponyPlay();
    ponyOnTheHeap("Lolly");
    ponyOnTheStack("white");
    pony_here2->ponyWalk();

    delete pony_here2;
    return 0;
}