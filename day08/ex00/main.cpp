// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/12 20:31:24 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/12 20:31:24 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "easyfind.hpp"
#include <iostream>

#include <vector>
#include <map>
#include <list>
#include <array>

int main(){

    std::vector<int> v_int (4,6); 
    std::list<int> lst;
    std::array<int,5> array_int = {3, 12, 90, 1, 2 };

    lst.push_back(4);
    lst.push_back(8);
    lst.push_back(15);
    lst.push_back(6);
    lst.push_back(23);
    lst.push_back(42);

    try
    {
        std::cout << *easyfind(v_int, 6) << std::endl;
        std::cout << *easyfind(lst, 6) << std::endl;
        //std::cout << *easyfind(array_int, 6) << std::endl;       
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}