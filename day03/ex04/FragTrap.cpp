// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   FragTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/04 09:51:25 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/04 09:51:25 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>
#include <string>

FragTrap::FragTrap(void): ClapTrap(){
    std::cout << "Constructor without param of FragTrap" << std::endl;
    level_ = 1;
    this->ClapTrap::setAll(100, 100, 100, 100, 30, 20, 5);
}
FragTrap::FragTrap(std::string str): ClapTrap(str){
    std::cout << "Constructor with string of FragTrap" << std::endl;
    level_ = 1;
    this->ClapTrap::setAll(100, 100, 100, 100, 30, 20, 5);
}
FragTrap::FragTrap(FragTrap const &copy): ClapTrap(copy){
    std::cout << "Constructor copy of FragTrap" << std::endl;
}
FragTrap& FragTrap::operator=(FragTrap const &other){
    std::cout << "operator =  of FragTrap" << std::endl;
    ClapTrap::operator= (other);

    return *this;    
}
FragTrap::~FragTrap(void){
    std::cout << " I'll die ....  FragTrap" << std::endl;
}

void    FragTrap::vaulthunter_dot_exe(std::string const & target){
    static  frag_attack_t Attacks[] = {&FragTrap::rangeAttack, &FragTrap::meleeAttack, &FragTrap::comboAttack, &FragTrap::flyAttack, &FragTrap::bombAttack};
        
    if (this->energy_points_ < 25){
        std::cout << "lack of energy" << std::endl;
        this->energy_points_ = 0;
        return ;    
    }
    int i = (rand() % 5); 
    this->energy_points_ -= 25;
    (this->*Attacks[i])(target);

}

void    FragTrap::rangeAttack(std::string const & target){
    std::cout << "Frag ";
    ClapTrap::rangeAttack(target);
}

void    FragTrap::meleeAttack(std::string const & target){
    std::cout << "Frag ";
    ClapTrap::meleeAttack(target);
}

void    FragTrap::comboAttack(std::string const & target){
    std::cout << "Frag ";
    ClapTrap::comboAttack(target);
}
void    FragTrap::flyAttack(std::string const & target){
    std::cout << "Frag ";
    ClapTrap::flyAttack(target);
}
void    FragTrap::bombAttack(std::string const & target){
    std::cout << "Frag ";
    ClapTrap::bombAttack(target);
}

void    FragTrap::takeDamage(unsigned int amount){
    std::cout << "Frag ";
    ClapTrap::takeDamage(amount);
}

void    FragTrap::beRepaired(unsigned int amount){
    std::cout << "Frag ";
    ClapTrap::beRepaired(amount);
}