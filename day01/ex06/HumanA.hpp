// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanA.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/02 17:07:25 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/02 17:07:25 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <string>

class HumanA{
public:
    HumanA(std::string, Weapon&);
    ~HumanA(void);
    void attack(void) const;

private:
    std::string _name;
    Weapon&     _weapon;
};

#endif