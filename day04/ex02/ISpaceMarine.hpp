// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ISpaceMarine.hpp                                   :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/05 20:09:20 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/05 20:09:20 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ISPACEMARINE_HPP
#define ISPACEMARINE_HPP

class ISpaceMarine{
public:
       virtual ~ISpaceMarine() {}
       virtual ISpaceMarine* clone() const = 0;
       virtual void battleCry() const = 0;
       virtual void rangedAttack() const = 0;
       virtual void meleeAttack() const = 0;
};

#endif