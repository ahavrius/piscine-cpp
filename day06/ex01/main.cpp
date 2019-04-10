// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/10 21:39:12 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/10 21:39:12 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <time.h>
#include <string>
#include <iostream>
#include "header.hpp"

void * serialize( void ){
  	static const std::string charList = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

    std::string alphanumeric1 = "";
    std::string alphanumeric2 = "";
	
	for(int i = 0; i < 8; i++) {
		alphanumeric1 += charList [rand() % charList.size()];
    	alphanumeric2 += charList [rand() % charList.size()];
    }

    Data * new_data = new Data;
    new_data->s1 = alphanumeric1;
    new_data->s2 = alphanumeric2;
    new_data->n = rand() % 30000;

    return static_cast<void *>(new_data);
}

Data * deserialize( void * raw ){
    return static_cast<Data *>(raw);
}

int main(){
    srand (time(NULL));
    Data    *data;

    data = deserialize(serialize());
    std::cout << data->s1 << " " << data->n << " " << data->s2 << std::endl;

    delete data;
    return 0;
}