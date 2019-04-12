// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/12 16:42:34 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/12 16:42:34 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Array.hpp"
#include <iostream>

int main(){
    try
    {
        Array<int> arr_float(10);
        Array<int>  arr_int;
        Array<char> arr_char;

        arr_int = arr_float;
        std::cout << arr_int.size() << " " << arr_int[5] << " " << std::endl;

        std::cout << arr_char.size() << " " << arr_char[5] << " " << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}