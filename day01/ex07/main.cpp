// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/02 19:23:50 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/02 19:23:51 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <fstream>
#include <string>

void replaceAll(std::string & data, std::string s1, std::string s2)
{
	size_t pos = data.find(s1);
 
	while( pos < data.length())
	{
		data.replace(pos, s1.size(), s2);
		pos = data.find(s1, pos + s2.length());
	}
}

int main(int argc, char **argv){
    if (argc != 4 || argv[2][0] == '\0' || argv[3][0] == '\0')
    {
        std::cout << "wrong parameters" << std::endl;
        return 0;
    }
    
    std::ifstream   ifile(argv[1]);
    std::ofstream   ofile(std::string(argv[1])+".replace");
    std::string     line;
    while (std::getline(ifile, line))
    {
        replaceAll(line, argv[2], argv[3]);
        ofile << line << std::endl;
    }

    ifile.close();
    ofile.close();
    return 0;
}
