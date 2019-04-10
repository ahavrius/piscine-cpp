// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/10 21:58:41 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/10 21:58:42 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <iostream>

Base * generate(void){
    int i = rand()%3;

    if (i == 0){
        std::cout << "A" << std::endl;
        return (Base *)(new A());
    }
    if (i == 1){
        std::cout << "B" << std::endl;
        return (Base *)(new B());
    }
    if (i == 2){
        std::cout << "C" << std::endl;
        return (Base *)(new C());
    }
    return (NULL);
}

void identify_from_pointer( Base * p ){

    if (dynamic_cast<A *>(p) != NULL)
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B *>(p) != NULL)
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C *>(p) != NULL)
        std::cout << "C" << std::endl;
    else
        std::cout << "who knows" << std::endl;
}

void identify_from_reference( Base & p ){

    try{
        (void)dynamic_cast<A &>(p);
        std::cout << "A" << std::endl;
    }
    catch (std::exception & o){}

    try{
        (void)dynamic_cast<B &>(p);
        std::cout << "B" << std::endl;
    }
    catch (std::exception & o){}    
    
    try{
        (void)dynamic_cast<C &>(p);
        std::cout << "C" << std::endl;
    }
    catch (std::exception & o){}
}

int main(){
    srand (time(NULL));

    Base  *base = generate();

    identify_from_pointer(base);
    identify_from_reference(*base);

    delete base;
    return 0;
}
