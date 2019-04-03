// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/03 12:27:11 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/03 12:27:11 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Logger.hpp"

#include <string>
#include <iostream>

int main(void){
    std::string file_name = "file_text.txt";
    Logger new_logger = Logger(file_name);
    std::string message = "correct log in";
  
    new_logger.log("logToConsole", file_name);
    new_logger.log("logToFile", message);

    return 0;
}