// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.class.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/03 14:40:39 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/03 14:40:40 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Fixed.class.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(void): _value(0){
    std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const int a): _value(a << _point){
    std::cout << "Int constructor called" << std::endl;
}
Fixed::Fixed(const float b){
    std::cout << "Float constructor called" << std::endl;
    this->_value = (int)roundf(b * (1 << _point));
}
Fixed::Fixed(Fixed const & copy) {
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}
Fixed::~Fixed(void){
    std::cout << "Destructor called" << std::endl;
}
int Fixed::getRawBits( void ) const{
    //std::cout << "getRawBits member function called" << std::endl;
    return this->_value;
}
void Fixed::setRawBits( int const raw ){
    //std::cout << "setRawBits member function called" << std::endl;
    this->_value = raw;
}
Fixed& Fixed::operator=(Fixed const & copy){
    std::cout << "Assignation operator called" << std::endl;
    this->_value = copy.getRawBits();
    return *this;
}
int Fixed::toInt(void) const{
    return this->_value >> _point;
}
float Fixed::toFloat( void ) const {
    return (float)this->_value / (1 << _point);    
}
std::ostream	&operator<<(std::ostream &o, Fixed const &r){
    o << r.toFloat();
    return o;
}


const int Fixed::_point = 8;