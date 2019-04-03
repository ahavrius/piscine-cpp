// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Weapon.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/02 17:07:08 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/02 17:07:08 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class   Weapon{
public:
    Weapon(std::string type);
    ~Weapon(void);
    const std::string & getType(void) const;
    void    setType(std::string s);

    std::string type;
};

#endif