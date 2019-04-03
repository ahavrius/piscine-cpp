// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanB.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/02 17:07:45 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/02 17:07:45 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <string>

class HumanB{
public:
    HumanB(std::string);
    ~HumanB(void);
    void setWeapon(Weapon&);
    void attack(void) const;

private:
    std::string _name;
    Weapon*     _weapon;
};


#endif