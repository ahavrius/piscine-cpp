// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Logger.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/02 20:56:53 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/02 20:56:53 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <string>
#include <fstream>
#include <iostream>
#include "Logger.hpp"

Logger::Logger(std::string &file): _file(file){}

Logger::~Logger(void){}

void Logger::logToConsole(std::string const & message){
    std::cout << message << std::endl;
}
void Logger::logToFile(std::string const & message){
    std::ofstream ofile(this->_file);
    ofile << message << std::endl;
    ofile.close();
}

std::string Logger::makeLogEntry(std::string const & message){
    std::time_t tt = std::time(NULL);
    std::string s = std::ctime(&tt);

    return (s.substr(0, s.size()-1) + " " + message);
}

void Logger::log(std::string const & dest, std::string const & message){
    static logs logsLogger[] = {&Logger::logToConsole, &Logger::logToFile};
    static std::string actionsName[] = {"logToConsole", "logToFile"};
    
    for (int i = 0; i < 2; i++)
        if (dest.compare(actionsName[i]) == 0)
            (this->*logsLogger[i])(message);
}