// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/09 17:32:48 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/09 17:32:48 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Bureaucrat.hpp"
#include <iostream>

int main(){
    try{
        Bureaucrat ted("Ted", 2);

        ted.incrementGrade();
        std::cout << ted << std::endl;

        ted.incrementGrade();
        std::cout << ted << std::endl;

        Bureaucrat bob("Bob", 300);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}