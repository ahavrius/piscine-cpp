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
#include "Form.hpp"
#include <iostream>

int main(){

    Bureaucrat ted("Ted", 2);
    Form form1("first", 1, 30);
    ted.signForm(form1);

    std::cout << std::endl << "------------------" << std::endl;
    try{
        Form form2("second", 76, 200);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }


    return 0;
}