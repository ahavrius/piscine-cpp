// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/01 15:40:36 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/01 15:40:38 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <iomanip>
#include <string>
#include "PhoneBook.class.hpp"

void showFormat(std::string line){
    if (line.length() > FORMAT)
        std::cout << line.substr(0, FORMAT-1) << ".";
    else
    {
        std::cout << std::setw(FORMAT);
        std::cout << line;
    }    
}

void choose(PhoneBook members[])
{
    int i = -1;
    std::string stream;
    int j;

    while (++i < MAX_MEM && members[i].getIndex() != 0) {
        showFormat(std::to_string(members[i].getIndex()));
        std::cout << "|";
        showFormat(members[i].getFn());
        std::cout << "|";
        showFormat(members[i].getLn());
        std::cout << "|";
        showFormat(members[i].getNn());
        std::cout << std::endl;
    }
    std::cout << "desired index :";
    std::cin >> stream;
    j = stream.c_str()[0] - '0';
    if (0 < j && j <= i && stream.c_str()[1] == '\0')
        members[j-1].showInfo();
    else
        std::cout << "wrong index" << std::endl;
}

int main(void) {
    PhoneBook   members[MAX_MEM];
    int         count = 0;
    std::string line;

    while (true){
        std::getline(std::cin, line);
        if (line.compare("ADD") == 0 && count == MAX_MEM)
            std::cout << "Too much members" << std::endl;
        else if (line.compare("ADD") == 0){
            members[count].setInfo(count + 1);
            count++;
        }
        if (line.compare("SEARCH") == 0)
            choose(members);
        if (line.compare("EXIT") == 0)
            exit(0);
    }
    return 0;
}