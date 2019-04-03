// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Logger.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/02 20:56:59 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/02 20:57:03 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef LOGGER_HPP
#define LOGGER_HPP

#include <string>

class Logger{
public:
    void    log(std::string const & dest, std::string const & message);
    Logger(std::string&);
    ~Logger(void);
private:
    std::string     makeLogEntry(std::string const & message);
    void            logToConsole(std::string const & message);
    void            logToFile(std::string const & message);
    std::string&    _file;    
};

typedef  void (Logger::*logs)(std::string const &);

#endif