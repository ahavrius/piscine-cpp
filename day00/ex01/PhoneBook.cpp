// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PhoneBook.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/01 15:36:45 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/01 15:36:46 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook(void) {
    this->index = 0;
    return ;
}
PhoneBook::~PhoneBook(void) {
    return ;
}

int         PhoneBook::getIndex(void){
    return this->index;
}

std::string PhoneBook::getFn(void){
    return this->_first_name;
}

std::string PhoneBook::getLn(void){
    return this->_last_name;
}
std::string PhoneBook::getNn(void){
    return this->_nickname;
}

void PhoneBook::setInfo(int index){
    this->index = index;

    std::cout << "first name :";
    std::getline(std::cin, this->_first_name);
    std::cout << "last name :";
    std::getline(std::cin, this->_last_name);
    std::cout << "nickname :";
    std::getline(std::cin, this->_nickname);
    std::cout << "login :";
    std::getline(std::cin, this->_login);
    std::cout << "postal address :";
    std::getline(std::cin, this->_address);
    std::cout << "email address :";
    std::getline(std::cin, this->_email);
    std::cout << "phone number :";
    std::getline(std::cin, this->_phone);
    std::cout << "birsday date :";
    std::getline(std::cin, this->_birthday);
    std::cout << "favorite meal :";
    std::getline(std::cin, this->_meal);
    std::cout << "underwear color :";
    std::getline(std::cin, this->_color);
    std::cout << "darkest secret :";
    std::getline(std::cin, this->_secret);
}

void PhoneBook::showInfo(void) const {
    //index?
    std::cout << "first name :";
    std::cout << this->_first_name << std::endl;
    std::cout << "last name :";
    std::cout << this->_last_name << std::endl;
    std::cout << "nickname :";
    std::cout << this->_nickname << std::endl;
    std::cout << "login :";
    std::cout << this->_login << std::endl;
    std::cout << "postal address :";
    std::cout << this->_address << std::endl;
    std::cout << "email address :";
    std::cout << this->_email << std::endl;
    std::cout << "phone number :";
    std::cout << this->_phone << std::endl;
    std::cout << "birsday date :";
    std::cout << this->_birthday << std::endl;
    std::cout << "favorite meal :";
    std::cout << this->_meal << std::endl;
    std::cout << "underwear color :";
    std::cout << this->_color << std::endl;
    std::cout << "darkest secret :";
    std::cout << this->_secret << std::endl;
}
