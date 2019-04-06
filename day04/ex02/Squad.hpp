// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Squad.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/05 20:06:41 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/05 20:06:42 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SQUAD_HPP
#define SQUAD_HPP
#include "ISpaceMarine.hpp"
#include "ISquad.hpp"

typedef struct              marinelist_s
{
	ISpaceMarine 			*marine;
	struct marinelist_s		*next;
}				            marinelist_t;


class Squad: virtual public ISquad{
    public:
        Squad(void);
        Squad(Squad const & copy);
        ~Squad(void);
        Squad& operator=(Squad const & copy);
        int getCount() const;
        ISpaceMarine* getUnit(int) const;
        int push(ISpaceMarine*);

    private:
        bool    isUnic(ISpaceMarine*) const;
        void    deleteAll();
        int count_;
        marinelist_t *head_;
        marinelist_t *tail_;
};

#endif