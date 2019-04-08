// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Weapon.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/06 22:28:59 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/06 22:28:59 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef WEAPON_HPP
#define WEAPON_HPP
#define HP_WEAPON (-1)

#include "SpaceEntity.hpp"

class Weapon : public SpaceEntity {
public:
	Weapon(void);
	Weapon(const Weapon &copy);
	~Weapon(void);
	Weapon &operator=(const Weapon &rhs);
	Weapon(int, int, int);

	void 		nearBorder(void);
	void		death(void);

};


#endif