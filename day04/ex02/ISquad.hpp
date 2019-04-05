// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ISquad.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/05 20:27:47 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/05 20:27:47 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ISQUAD_HPP
#define ISQUAD_HPP
#include "ISpaceMarine.hpp"


class ISquad{
public:

    virtual ~ISquad() {}
    virtual int getCount() const = 0;
    virtual ISpaceMarine* getUnit(int) const = 0;
    virtual int push(ISpaceMarine*) = 0;
};



#endif