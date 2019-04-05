// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PlasmaRifle.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/05 12:56:55 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/05 12:56:55 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include "AWeapon.hpp"
#include <string>

class PlasmaRifle: public AWeapon{
public:
        PlasmaRifle();
        PlasmaRifle(PlasmaRifle const &);
        PlasmaRifle& operator=(PlasmaRifle const &);
        ~PlasmaRifle();
        void attack() const;
};

#endif
