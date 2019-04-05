// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   RadScorpion.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/05 12:58:30 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/05 12:58:30 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP
#include "Enemy.hpp"

class RadScorpion: public Enemy{
public:
        RadScorpion();
        RadScorpion(RadScorpion const &);
        RadScorpion& operator=(RadScorpion const &);
        ~RadScorpion();
        void takeDamage(int);

};

#endif