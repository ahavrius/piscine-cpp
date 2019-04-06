// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   TacticalMarine.hpp                                 :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/05 20:08:46 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/05 20:08:46 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef TACTICAMARINE_HPP
#define TACTICAMARINE_HPP

#include "ISpaceMarine.hpp"

class TacticalMarine: virtual public ISpaceMarine{
    public:
        TacticalMarine(void);
        TacticalMarine(TacticalMarine const & copy);
        ~TacticalMarine(void);
        TacticalMarine& operator=(TacticalMarine const & copy);

        ISpaceMarine* clone() const;
        virtual void battleCry() const;
        virtual void rangedAttack() const;
        virtual void meleeAttack() const;

};

#endif