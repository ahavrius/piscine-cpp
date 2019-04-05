// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PowerFist.hpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/05 12:57:15 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/05 12:57:15 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef POWERFIRST_HPP
#define POWERFIRST_HPP

#include "AWeapon.hpp"

class PowerFist: public AWeapon{
public:
        PowerFist();

        PowerFist(PowerFist const &);
        PowerFist& operator=(PowerFist const &);
        ~PowerFist();
        void attack() const;
};

#endif