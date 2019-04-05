// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   AWeapon.hpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/05 12:56:29 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/05 12:56:29 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <string>

class AWeapon{
private:
        AWeapon();
protected:
        std::string name_;
        int apcost_;
        int damage_;
public:
        AWeapon(std::string const & name, int apcost, int damage);
        AWeapon(AWeapon const &);
        AWeapon& operator=(AWeapon const &);
        virtual ~AWeapon();
        std::string const & getName() const;
        int getAPCost() const;
        int getDamage() const;
        virtual void attack() const = 0;
};

#endif