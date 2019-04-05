// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Character.hpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/05 12:58:49 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/05 12:58:50 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <string>
#include "AWeapon.hpp"
#include "Enemy.hpp"
#include <iostream>

class Character{
private:
    std::string name_;
    int         ap_;
    AWeapon     *weapon_;
    Character();

public:
    Character(std::string const &);
    Character(Character const &);
    ~Character();
    Character& operator=(Character const &);

    void recoverAP();
    void equip(AWeapon*);
    void attack(Enemy*);
    std::string const & getName() const;
    int getAP() const;
    AWeapon* getWeapon() const;

};

std::ostream& operator<<(std::ostream &, Character const &);


#endif