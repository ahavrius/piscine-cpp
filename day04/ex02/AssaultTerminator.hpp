// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   AssaultTerminator.hpp                              :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/05 20:09:05 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/05 20:09:05 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ASSAULTTERMINATOPR_HPP
#define ASSAULTTERMINATOPR_HPP

#include "ISpaceMarine.hpp"

class AssaultTerminator: virtual public ISpaceMarine{
    public:
        AssaultTerminator(void);
        AssaultTerminator(AssaultTerminator const & copy);
        ~AssaultTerminator(void);
        AssaultTerminator& operator=(AssaultTerminator const & copy);

        ISpaceMarine* clone() const;
        virtual void battleCry() const;
        virtual void rangedAttack() const;
        virtual void meleeAttack() const;

};

#endif