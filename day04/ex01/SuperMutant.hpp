// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   SuperMutant.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/05 12:57:58 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/05 12:57:59 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP
#include "Enemy.hpp"

class SuperMutant: public Enemy{
public:
        SuperMutant();
        SuperMutant(SuperMutant const &);
        SuperMutant& operator=(SuperMutant const &);
        ~SuperMutant();
        void takeDamage(int);

};

#endif