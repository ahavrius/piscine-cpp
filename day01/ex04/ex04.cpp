// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ex04.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/02 16:09:34 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/02 16:09:35 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <string>

int main(void){
    std::string line = "HI THIS IS BRAIN";
    std::string *line_ptr = &line;
    std::string &line_ref = line;

    std::cout << *line_ptr << std::endl;
    std::cout << line_ref << std::endl;

    return 0;
}